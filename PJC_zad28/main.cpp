#include <iostream>
#include <cmath>
using namespace std;

/*
Zaprojektować klasę Punkt reprezentującą punkty na płaszczyźnie. Polem klasy Punkt jest m. in. wskaźnik (typu int*)
do tablicy dwóch współrzędnych punktu.
Tablicę tę trzeba alokować dynamicznie w konstruktorach oraz zwolnić w destruktorze.
Każdy punkt powinien mieć swój unikalny numer (zaczynając od 1), nadany automatycznie przy jego tworzeniu
(skorzystać ze składowych statycznych klasy).
Klasa Punkt powinna zawierać następujące składowe:

Konstruktory:
Punkt();               // konstruktor domyślny utworzy punkt (0,0)
Punkt(int x, int y);   // konstruktor utworzy punkt (x,y)
Punkt(const Punkt& p); // konstruktor kopiujący utworzy identyczny obiekt (ale rozłączny) z obiektem p - kopiowanie głębokie

Destruktor:
 ~Punkt();            // zwalnia dynamicznie zaalokowaną pamięć oraz wyświetla informację o zniszczonym obiekcie

Metody:
int wspX() const;    // zwraca współrzędną x
int wspY() const;    // zwraca współrzędną y

void ustaw(int x, int y);      // ustawia nowe współrzędne x, y
double odl(const Punkt &p);   // zwraca odległość między dwoma punktami
void drukuj();                // zwraca informację o punkcie

Przetestować działania WSZYSTKICH konstruktorów, destruktora oraz metod. Do testowania składowych należy utworzyć obiekty w funkcji main lokalnie,
np.: Punkt p1, p2 = Punkt(), p3(3,3); Punkt p4 = Punkt(4,4); Punkt p5 = p4, p6 = Punkt(p5), p7(p6); ... oraz korzystając z dynamicznej alokacji pamięci,
 np: Punkt *p8 = new Punkt(8,8), *p9 = new Punkt(*p8);...

*/

class Punkt{

    int *wsp;
    static int nr;

    public:

    Punkt(){

        this->wsp = new int[2];
        this->wsp[0] = this->wsp[1] = 0;
        nr++;
        cout << "\nNowy obiekt klasy Punkt nr " << nr << "\n";

}
    Punkt(int x, int y){

        this->wsp = new int[2];
        this->wsp[0] = x;
        this->wsp[1] = y;
        nr++;
        cout << "\nNowy obiekt klasy Punkt nr " << nr << "\n";
}
    Punkt(const Punkt& p)
    {

        double x,y;
        x = p.wspX();
        y = p.wspY();
        this->wsp = new int[2];
        this->wsp[0] = x;
        this->wsp[1] = y;
        nr++;
        cout << "\nNowy obiekt klasy Punkt nr " << nr << "\n";
    }

    ~Punkt(){

        if(this->wsp != NULL)
        {
            delete[] this->wsp;
            this->wsp = NULL;
        }

        cout<< "obiekt nr " << nr << " zniszczony" << endl;
        nr--;

    }
    int wspX() const{

        return this->wsp[0];
    }
    int wspY() const{

        return this->wsp[1];
    }
    void ustaw(int x, int y){

        this->wsp[0] = x;
        this->wsp[1] = y;

    }

    double odl(const Punkt &p){

        double dx=(double)p.wspX()-((double)this->wsp[0]),
               dy=(double)p.wspY()-((double)this->wsp[1]);

        return sqrt(dx*dx+dy*dy);

    }
    void drukuj(){

        cout << "(" << this->wsp[0] << "," << this->wsp[1] << ")\n";

    }

};


/*
Zadanie 29 (4p)

Korzystając z klasy Punkt z zadania 28 zaprojektować klasę Odcinek reprezentującą odcinki na płaszczyźnie. Polami klasy Odcinek są m. in. dwa punkty końcowe odcinka, typu Punkt.
Każdy odcinek powinien mieć swój unikalny numer (zaczynając od 1), nadany automatycznie przy jego tworzeniu. Klasa Odcinek powinna zawierać następujące składowe:

Konstruktory:
Odcinek();                                    // konstruktor domyślny utworzy odcinek (0,0) - (0,0)
Odcinek(const Punkt& p, const Punkt& k);      // konstruktor utworzy nowy odcinek p - k na podstawie współrzędnych dwóch podanych punktów
Odcinek(const Odcinek& o);                    // konstruktor kopiujący utworzy identyczny obiekt (ale rozłączny) z obiektem o - kopiowanie głębokie

Destruktor:
 ~Odcinek();      // wyświetla informację o zniszczonym obiekcie

Metody:
Odcinek* rzutX();     // utworzy dynamicznie (na stercie) odcinek bedący rzutem danego odcinka na osi X
Odcinek* rzutY();     // utworzy dynamicznie (na stercie) odcinek bedący rzutem danego odcinka na osi Y
void drukuj();           // zwraca informację o odcinku

Przetestować działania WSZYSTKICH konstruktorów, destruktora oraz metod. Do testowania składowych należy utworzyć obiekty w funkcji main lokalnie oraz korzystając z dynamicznej alokacji pamięci (new).


*/

class Odcinek{

    Punkt p1, p2;

    public:

    Odcinek():p1(), p2(){

    }
    Odcinek(const Punkt& p, const Punkt& k):p1(p), p2(k){

    }
    Odcinek(const Odcinek& o):p1(o.p1), p2(o.p2){

    }

    ~Odcinek(){

    cout<< "usuwam odcinek o punktach ["<< p1.wspX()<< ","<< p1.wspY()<<"] . ["<<p2.wspX()<< ","<< p2.wspY()<<"] "<<endl;

    }
    Odcinek* rzutX(){

        Punkt* p3 = new Punkt(p1.wspX(),0);
        Punkt* p4 = new Punkt(p2.wspX(),0);
        Odcinek* wynik = new Odcinek(*p3,*p4);

        return wynik;

    }
    Odcinek* rzutY(){

        Punkt* p3 = new Punkt(0, p1.wspY());
        Punkt* p4 = new Punkt(0, p2.wspY());
        Odcinek* wynik = new Odcinek(*p3,*p4);

        return wynik;

    }
    void drukuj(){

        cout<< "Odcinek o punktach ["<< p1.wspX()<< ","<< p1.wspY()<<"] . ["<<p2.wspX()<< ","<< p2.wspY()<<"] "<<endl;

    }

};

int Punkt::nr = 0;

int main()
{

    Punkt p1;
    p1.drukuj();

    Punkt p2=Punkt();
    p2.drukuj();

    Punkt p3(1,2);
    p3.drukuj();

    Punkt p4=Punkt(3,4);
    p4.drukuj();

    Punkt p5=p4;
    p5.drukuj();

    Punkt p6=Punkt(p5);
    p6.drukuj();

    Punkt p7(p6);
    p7.drukuj();

    Punkt *p8=new Punkt(88,44), *p9=new Punkt(*p8);

    p8->drukuj();
    p9->drukuj();

    p9->ustaw(2,5);
    p9->drukuj();

    cout <<"p3= " << "(" << p3.wspX() << "," << p3.wspY() << ")\n";
    cout << p8->odl(*p9) << "\n";

    delete p8;
    delete p9;


    Odcinek odc = Odcinek();
    Odcinek odc2 = Odcinek(p1,p3);
    Odcinek odc3 = Odcinek(odc2);

    Odcinek* x = odc3.rzutX();
    cout<<"rzut x:"<<endl;
    x->drukuj();

    Odcinek* y = odc3.rzutY();
    cout<<"rzut y:"<<endl;
    y->drukuj();

    Odcinek* odc4 = new Odcinek();
    Odcinek* odc5 = new Odcinek(*odc4);
    Odcinek* odc6 = new Odcinek(p1,p3);


    delete odc4;
    delete odc5;
    delete odc6;


    return 0;
}
