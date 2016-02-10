#include <iostream>

using namespace std;


 void readArray(int* a, int& n, int max){

	int i = 0, tmp = 1;

	while (true) {
		if (tmp != 0)
			n = i;

		if (tmp != 0 && i < max) {

			cout << "Podaj liczbe lub \'0\'" << endl;
			cin >> tmp;

			*(a + i) = tmp;

		} else {
			*(a + i) = 0;
			if (i == max)
				break;
		}
		i++;

	}


 }


int main()
{

    const int m = 5;
	int tab[m], n;

	readArray(tab, n, m);

	for (int i = 0; i < m; i++)
    cout << "tab[" << i << "]= " << tab[i]<<endl;

	cout << "ilość wprowadzonych elementów: " << n << endl;

    return 0;
}
