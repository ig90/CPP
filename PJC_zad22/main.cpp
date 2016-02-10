#include <iostream>

using namespace std;

template<typename T>
    bool mniejsze(T pierwszy, T drugi) {
        return (pierwszy < drugi);
}

template<typename T>
    bool wieksze(T pierwszy, T drugi) {
        return (pierwszy > drugi);
}

template<typename T>
    T min_maks(T arr[], int size, bool(*f)(T, T)) {
        T tmp = arr[0];

        for (int i = 1; i < size; i++) {
            if (f(arr[i], tmp)) {
                tmp = arr[i];
            }
        }
	return tmp;
}

int main(int argc, char *argv[]) {

	double arr[] = {90, 34, 27.5, 1234, 811, 60, 4, 654, 10, 7};
	const int R = sizeof(arr) / 8;

	cout << "min_maks dla 'mniejsze': " << min_maks(arr, R, mniejsze) << endl;
	cout << "min_maks dla 'wieksze': " << min_maks(arr, R, wieksze) << endl;


	return 0;
}
