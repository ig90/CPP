#include <iostream>

using namespace std;


void erase(int* a, int index, int max){

    int i = 0;

	while (index+i < max) {

		*(a+index+i) = *(a+index+i+1);
		i++;
	}
	a[max-1] = 0;

}

void insert (int* a, int max, int index, int key){

    int i = 0;

	while (index < max-i-1) {

		a[max-i-1] = a[max-i-2];
		i++;
	}
	a[index] = key;

}

int main()
{

    const int m = 10;

	int tab[m] = {1, 16, 4, 76, 9, 11, 29, 34, 54, 30};

    cout << "tablica: " << endl;
    for (int i=0; i<m; i++)
		cout << "tab[" << i << "]= " << tab[i] << endl;

	erase(tab, 4, m);
    cout << "po usunięciu: " << endl;
	for (int i=0; i<m; i++)
		cout << "tab[" << i << "]= " << tab[i] << endl;

    insert(tab, m, 2, 24);

    cout << "po wstawieniu: " << endl;
	for (int i=0; i<m; i++)
		cout << "tab[" << i << "]= " << tab[i] << endl;

    return 0;
}
