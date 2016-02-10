#include <iostream>

using namespace std;

int main()
{

	char *napis1= "Programowanie cpp",	// lub: const char *napis1 = "Programowanie cpp"; bo jest niemodyfikowalne
		 napis2[] = {'C', 'p', 'p', '\0'},
		 *napis3 = napis2;

	cout << "napis2[0] = " << napis2[0] << endl;  // wyświetli pierwszy znak w tablicy, czyli C
	cout << "*napis2 = " << *napis2 << endl;         // również pierwszy znak tablicy

	cout << "*napis3 = " << *napis3 << endl;        // również pierwszy znak tablicy
	cout << "napis3 = " << napis3 << endl;          // wyświetli elementy tablicy napis2, na którą wskazuje napis3

	cout << "napis1 = " << napis1 << endl;          // wyświetli napis1
	cout << "*napis1 = " << *napis1 << endl;           // pierwszy element napis1
	cout << "*(napis1+5) = " << *(napis1+5) << endl;  // szósty element napis1

	napis1 = napis2;                         // zmiana wartości napis1 na wartość napis2
	cout << "napis1 = " << napis1 << endl;


	int c = 0;
	while (*napis1 != '\0') {
		if (*napis1 == 'p')
			c++;
		napis1++;
	}
	cout << "c = " << c << endl;             // wyświetli ilość znaków od 'p' (z wyłączeniem nul).

	return 0;

}
