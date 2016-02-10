#include <iostream>

using namespace std;

template <typename T>
void printTab(T *tab, int size) {
	for (int i = 0; i < size; i++)
		cout << "tab[" << i << "]: " << tab[i] << endl;
}

template <typename T>
int binSearch(T arr[], T value, int begin, int end) {
	int mid;
	int i = 0;

	while (begin <= end) {
		mid = (begin + end) / 2;

		if (arr[mid] == value)
			return mid;
		else {
			if (value < arr[mid])
				end = mid-1;
			else
				begin = mid+1;
		}
		cout << i++ << " begin: " << begin << ", end: " << end << ", środek: "
				<< mid << endl;
	}
	return -1;
}


int main(int argc, char *argv[]) {
	double arr[] = {90, 34, 27.5, 1234, 811, 60, 4, 654, 10, 7};
	double szukanaLiczba = 654;
	int poczatek = 2;
	int koniec = 8;
	const int R = sizeof(arr) / 8;

	cout << "tablica:\n";
	printTab(arr, R);

	cout << "Indeks elementu: " << szukanaLiczba << " w tab. "
			<< binSearch(arr, szukanaLiczba, poczatek, koniec) << endl;


	return 0;
}
