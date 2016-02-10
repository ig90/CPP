
// zad 1.

#include <iostream>

using namespace std;

#define x y
#define z 1  // niepotrzebny znak równości

int main()
{


	int x = 0;  // brakowało deklaracji typu

	cout << "x = " << x << " " << "y = " << y << endl;

	cout << z+1 << endl;

	return 0;
}



// zad 2.

/*
#include <iostream>

using namespace std;

#define typ int
#define x y

int main()
{

	int x = 0;

	cout << "x = " << x << " "
	     << "y = " << y
	     << endl;

	 y = 1;  //niepotrzebne ponowne zadeklarowanie zmiennej y
	cout << y << endl;

	return 0;
}


// zad 3.


#include <iostream>

using namespace std;

#define kwadrat(x) x*x

int main()
{

	int x = 5;

	cout << "kwadrat " << x << " = " << kwadrat(x) << endl;

	int z = 2, t = 3;

	cout << "kwadrat " << z+t << " = " << kwadrat((z+t)) << endl; // brakowało jeszcze jednego nawiasu

	return 0;
}



// zad 4.

#include <iostream>
#include <cmath>
#include <stdlib.h> // brakowało tej biblioteki

using namespace std;


#define MAX 10
#define MSG(s) cout << s << endl
#define DEBUG	// zamiast definiowac w programie makro XXX (tu DEBUG),
		// mozna uzyc opcji -D kompilatora, np. g++ -DXXX zad.cpp


int main(int argc, char **argv)
{

	if (argc > MAX)
		return 1;

	MSG("OK. Zaczynamy!");

	double s = 0, wynik;

	for (int i = 1; i < argc; i++)
		s = s + atof(argv[i]);

#ifdef DEBUG

	if (s < 0)

		MSG("Suma ujemna, sqrt nie dziala!");

    else

#endif

	{
		wynik = sqrt(s);

		cout << "Pierwiastek sumy argumentow = " << wynik << endl;
	}

	return 0;
}



// zad. 5b)

#include <iostream>

using namespace std;

#define zamien(x,y) x=y-x+(y=x);

int main()
{

	int x = 1;
    int y = 2;

    zamien(x,y)
	cout << "x = " << x << " " << "y = " << y << endl;

	return 0;
}



*/





