#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;


double bin2d(char* b) {

	double wynik = 0.0;
	int dt = strlen(b);
	int j = 0;


	for (int i = -3; j<dt; i++) {

            if (b[j]!='1' && b[j]!='0' && b[j]!='.'){

            cout << "Niepoprawna liczba!" << endl;
			return -1;

            }

		if (b[dt-4] == '.') {
			if (j==3)
				i--;
			else
				wynik += (b[dt-j-1] - '0') * (powl(2, i));
		} else {
			cout << "Niepoprawna liczba!" << endl;
			return -1;
		}
		j++;
	}

	return wynik;
}

int main(int argc, char *argv[]) {

	char* napis = "1101.101";

	cout << "binarnie: " << napis << " dziesiętnie:  " << bin2d(napis) << endl;

	return 0;
}






