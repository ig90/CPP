
#include <iostream>

using namespace std;

int main()
{
float liczba;
float tmp;
float suma = 0;

do{
cout << "wprowadź liczbę: " << endl;
cin >> liczba;

tmp = liczba *liczba;

suma=suma+tmp;

}
while (liczba != 0);


    return 0;
}
