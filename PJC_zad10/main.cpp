#include <iostream>
using namespace std;

char* funkcja(char *text)
{
	int i = 65;		// kod ASCII znaku 'A'

	while (*text) {

		cout << "Przed zmiana: " << *text << " (" << (long long)text << "), ";

		*text = (char)i++;

		cout << "po zmianie: " << *text << " (" << text << "), adres: "
             << (long long)text << endl;

		text++;
	}

	cout << "Wartosc (adres) zwrocona do funkcji wywolujacej (main): "
         << text << endl;

    return text;
}


int main()
{

	char tab []= "PJC";

	cout << "---- Przed wywolaniem funkcji ---" << endl;

	cout << "Napis tab = " << tab << ", adres: " << (long long)tab << "\n" << endl; // wypisuje zawartość tab, czyli PJC i adres tab po konwersji na typ long long

	cout << "---- Wywolanie funkcji ---" << endl;

	char *s = funkcja(tab);  // funkcja wypisuje najpierw pierwszy znak tablicy tab, potem całą tablicę, następnie pierwszy znak
                            // tab zamienia na literę B (po konwersji int i na char i iteracji). Na końcu wypisuje zmiany jakie
                            // zaszły, czyli wypisuje pierwszą literę tablicy (B), dalej całą tablicę (AJC) i adres jej pierwszego elementu


	cout << endl;

	cout << "---- Po powrocie do funkcji wywolujacej (main) ---" << endl;

	cout << "Napis s (wartosc zwrocona przez funkcje) =  " << s << ", adres: "
         << (long long)s << endl;

	cout << "Napis tab = " << tab << ", adres: "  << (long long) tab << endl;

	cout << endl;

	return 0;
}
