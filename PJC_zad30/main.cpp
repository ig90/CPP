#include <iostream>
#include <cmath>
using namespace std;

/*
ZADANIE 30 (5p)

Zaprojektować klasę Ulamek reprezentującą ułamki liczb całkowitych,
z prywatnymi polami: licznik, mianownik. Klasa Ulamek powinna zawierać następujące składowe:

Konstruktory:
Ulamek(int licz, int mian);  // konstruktor utworzy ułamek licz/mian
Ulamek(const Ulamek&);    // konstruktor kopiujący

Metody:
Ulamek dodaj(const Ulamek&) const;    // zwraca nowy ułamek będący sumą dwóch ułamków
Ulamek mnoz(const Ulamek&) const;    // zwraca nowy ułamek będący iloczynem dwóch ułamków

Przeciążenie operatorów:
Ulamek& operator=(const Ulamek&);  // operator przypisania
Ulamek& operator++();             // operator  preinkrementacji (++u) umożliwiający zwiększenie ułamka o 1
const Ulamek operator++(int)      // operator  postinkrementacji (u++) umożliwiający tworzenie nowego ułamka identycznego ze starym, jednocześnie zwiększenie starego ułamka o 1
Ulamek operator-()                // opeartor minus (-u) umożliwiający tworzenie nowego ułamka ze znakiem przeciwnym

Funkcje globalne:
friend ostream& operator<<(ostream& str, Ulamek);    // operator << pozwalający wypisywać ułamek do strumienia wyjściowego str w odpowiedniej postaci:
1/4 -> "1/4", 8/12 -> "2/3", 16/10 -> "1 3/5", -8/5 -> "-1 3/5", 15/-3 -> "-5", ...
friend Ulamek operator+(const Ulamek& u, const Ulamek& v); // operator + umożliwiający wynonanie operacji u+v dający nowy ułamek będący sumą dwóch  ułamków.

Przetestować działania WSZYSTKICH konstruktorów, metod, przeciążonych operatorów oraz funkcji.

*/


class Ulamek{

  int licz, mian;

public:

  Ulamek(int licz, int mian){


        this->licz=licz;

        if (mian!=0)
            this->mian=mian;
        else
            cout <<"Mianownik nie moze miec wartosci 0";
  }

  Ulamek(const Ulamek& u): licz(u.licz), mian(u.mian){

      //  this->licz = u.licz;
      //  this->mian = u.mian;

  }
    int wspMian(int a,int b) const{
        if(a*b !=0)
        {
        return a*b;
        }
        return 1;
    }

  Ulamek dodaj(const Ulamek& d) {

    int mian_tmp = 0;
    int licz_tmp = 0;
    mian_tmp = wspMian(mian, d.mian);
    licz_tmp = ((licz*d.mian)+(d.licz*mian));
    return Ulamek (licz_tmp, mian_tmp);

  }

  Ulamek mnoz(const Ulamek& u) const{

    return Ulamek( licz*u.licz , mian*u.mian );

  }
  Ulamek& operator=(const Ulamek& u){


  }
  Ulamek& operator++(){


  }

  const Ulamek operator++(int a){

  }

  Ulamek operator-()   {

    return Ulamek(-licz,mian);

  }

  friend ostream& operator<<(ostream& str, Ulamek u){

    cout << u.licz << '/' << u.mian;
    return str;


  }
  friend Ulamek operator+(const Ulamek& u, const Ulamek& v){


  }

};


int main()
{


//Ulamek U1(6,8); //
Ulamek U2(1,2);
Ulamek U3(3,4);

Ulamek U4(4,5);
Ulamek U5(5,7);


cout << U2 << endl << U3 << endl;

 Ulamek wynik = U2.dodaj(U3);

 cout<< wynik << endl;

 Ulamek wynik2 = U4.mnoz(U5);

 cout<< wynik2 << endl;

    cout << -U5  <<endl;



    return 0;
}
