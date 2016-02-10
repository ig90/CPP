#include <iostream>

using namespace std;

void fill(int *a[], int dim1, int dim2) {
	int i, j;

	for (i=0; i<dim1; i++) {
		for (j=0; j<dim2; j++) {
			cout << "Podaj element dla a[" << i << "][" << j << "]:" << endl;
			cin >> a[i][j];
		}
	}
}
void print(int* tab[], int dim1, int dim2) {

    cout << "wprowadzona macierz: " << endl;
	int w, k;
	for (w=0; w<dim1; w++) {
		for (k=0; k<dim2; k++)
			cout << tab[w][k] << " ";
		cout << endl;
	}
}

int main()
{

    const int dim1 = 2, dim2 = 3;
	int *macierz[dim1], i, j;
	int tmp[dim1][dim2];

	for (i=0; i<dim1; i++)

        macierz[i] = tmp[i];

	fill(macierz, dim1, dim2);

	for (i=0; i<dim1; i++) {
		for (j=0; j<dim2; j++)
			cout << "macierz[" << i << "][" << j << "]=" << macierz[i][j]<< endl;
	}

	print(macierz, dim1, dim2);

    return 0;
}
