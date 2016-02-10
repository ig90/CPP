// prg 1.

#include <iostream>

using namespace std;

int main()
{
    int v1 = 1, v2 = 2;

    int *p1 = &v1, *p2 = &v2; // p wskazuje adres zmiennej v1, p2 wskazuje adres zmiennej v2

	cout << "v1 = " << v1 << endl;

    cout << "&v1 = " << &v1 << endl; // wyświetli adres zmiennej v1

    cout << "&v1 = &*p = " << &*p1 << endl; // adres zmiennej v1, na który też wskazuje wskaźnik p1

	cout << "p1 = " << p1 << endl;  // adres zmiennej wskazywanej przez p1

    cout << "&p1 = " << &p1 << endl; // adres wskaźnika p1

	cout << "*p1 = " << *p1 << endl; // wartość zmiennej v1 (czyli tej, na którą wskazuje p1)

    *p1 = 3;
	cout << "*p1 = " << *p1 << ", " << "v1 = " << v1 << endl; // zmiana wartości zmiennej na którą wskazuje p1

    p1 = p2;                                                    //przypisanie adresu p2 do p1
    cout << "*p1 = " << *p1 << ", " << "v2 = " << v2 << endl; // p1 i p2 wskazują teraz na tę samą zmienną

	p2 = &v1;
	cout << "*p2 = " << *p2 << ", " << "v1 = " << v1 << endl; //przypisanie do wkaźnika p2 adresu zmiennej v1 i wyświetlenie wartości zmiennej v1 za pomocą wskaźnika

	p1 = 0;// lub: p1 = nullptr; w standardzie C+11
    cout << "*p1 = " << *p1 << endl;

    return 0;
}


// prg 2.

#include <iostream>

using namespace std;

void add1(double);
void add2(double&);

int main()
{
	double v1 = 1, &o1 = v1, *p = &o1;

	cout << "&v1 = " << &v1 << endl; // adres zmiennej v1
	cout << "&o1 = " << &o1 << endl; //adres referencji o1 do v1, czyli adres zmiennej o1
	cout << "p = " << p << endl;    // adres zmiennej na którą p wskazuje, czyli adres o1 = v1

	cout << "v1 = " << v1 << endl;  // wartosc zmiennej v1
	cout << "o1 = " << o1 << endl;  // wartosc referencji o1, czyli wartosc v1

	o1 = 2; // zmiana wartosci zmiennej v1 (przez referencję o1)

	cout << "v1 = " << v1 << endl;   // wypisanie nowej wartosci v1
	cout << "o1 = " << o1 << endl;
	cout << "*p = " << *p << endl;  // wartosc zmiennej wskazywanej przez p, czyli ref. o1, czyli zmiennej v1

	v1 = 3;

	cout << "v1 = " << v1 << endl;
	cout << "o1 = " << o1 << endl;
	cout << "*p = " << *p << endl;

    //int &o2;  // przy deklaracji należy podać, na jaką zmienną będzie wskazywać

	const int &o3 = 4;
	cout << "o3 = " << o3 << endl;

	add1(v1);
	cout << "o1 = " << o1 << ", v1 = " << v1 << endl;

	add2(o1);
	cout << "o1 = " << o1 << ", v1 = " << v1 << endl;

    return 0;
}

void add1(double x) {
	x = x + 1;
}

void add2(double& x) {
	x = x + 2;
}


// prg 3

#include <iostream>

using namespace std;

int main()
{

	const int N = 4;

	int tab1[N] = {1, 2, 3}, tab2[] = {2, 4, 6, 8}, i = 0;

	cout << "Rozmiar zmiennej typu int w bajtach: " << sizeof(int) << endl;
	cout << "Rozmiar tablicy tab1 w bajtach: " << sizeof(tab1) << endl;


	for (i = 0; i < N ; i++)
		cout << "tab1[" << i << "] = " << tab1[i] << endl;  // wypisuje wartości wszystkich elementów tablicy tab1
	for (i = 0; i < 4; i++)
		cout << "tab2[" << i << "] = " << tab2[i] << endl;   // wypisuje wszystkie elementy tablicy tab2


	cout << "tab1 = " << tab1<< " &tab1[0] = " << &tab1[0] << endl;  // zwraca adres tab1, &tab1[0] zwraca adres pierwszego elementu tab1
	cout << "*tab1 = " << *tab1 << " tab1[0] = " << tab1[0] << endl;   // *tab1 zwraca nazwę pierwszego elementu tab1, tak samo jak tab1[0]


	*tab1 = *tab2;                      // zmiana wartości pierwszego elementu tab1 na wartość pierwszego elementu tab2
	for (i = 0; i < N ; i++)
		cout << "tab1[" << i << "] = " << tab1[i] << endl;


	int *p = tab2;
	cout << "*(p+1) = " << *(p+1) << " tab2[1] = " << tab2[1] << endl;     // tab2[1] - drugi element tab2, czyli 4

	p = tab2 + 2;
	cout << "*p = " << *p << " tab2[2] = " << tab2[2] << endl;

	p = tab1;
	for (i = 0; i < N ; i++) {
		cout << "*p = " << *p << endl;
		p++;
	}

	p = tab2+4;
	p -= 2;
	cout << "*p = " << *p << " tab2[1] = " << tab2[2] << endl;


	int *q = tab2+3;
	cout << "*q = " << *q << " tab2[2] = " << tab2[3] << endl;
	cout << "p-q = " << p-q << endl;

 //   system("pause");
    return 0;

}


