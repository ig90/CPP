
/*
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

   const int r=26;
	int tabMale[r] = {0};
	int tabDuze[r] = {0};
//	int tmp[];  // w tablicy pomocniczej zapisujemy kolejność występowania znaków
	int i, j;
	char znak;

    cout << "Wprowadź znaki: " << endl;
	while (znak != '.') {
		znak = cin.get();
       // char tmp[]=znak;

        if (znak >= 'a' && znak <= 'z')
			tabMale[znak - 'a']++;

		else if (znak >= 'A' && znak <= 'Z')
			tabDuze[znak - 'A']++;

	}

	cout << "\nDuze litery:" << endl;
	for (i = 0; i < r; i++) {
		if (tabDuze[i] != 0) {
			cout << (char) (i + 'A') << " ";

			for (j = 0; j < tabDuze[i]; j++)
				cout << "#";

			cout << " " << tabDuze[i] << endl;
		}
	}

	cout << "\nMale litery:" << endl;
	for (i = 0; i < r; i++) {
		if (tabMale[i] != 0) {
			cout << (char) (i + 'a') << " ";

			for (j = 0; j < tabMale[i]; j++)
				cout << "#";

			cout << " " << tabMale[i] << endl;
		}
	}
	return 0;
}
*/

//






#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

   const int r=26;
	int tabMale[r] = {0};
	int tabDuze[r] = {0};
//	int tmp[];  // w tablicy pomocniczej zapisujemy kolejność występowania znaków
	int i, j;
	char znak;
	char tmp[r];

	int k =0;


    cout << "Wprowadź znaki: " << endl;
	while (znak != '.') {
		znak = cin.get();

/*
		tmp[k]=znak;
		k++;

        for(int z; z<k; z++){
            if(tmp[z]==tmp[k])
                k--;
        }
*/

        if (znak >= 'a' && znak <= 'z')
			tabMale[znak - 'a']++;

		else if (znak >= 'A' && znak <= 'Z')
			tabDuze[znak - 'A']++;



	}
/*
	for (int i=0; i< k; i++){

		cout << " " << (char) tmp[i];

        }
*/

	cout << "\nDuze litery:" << endl;
	for (i = 0; i < r; i++) {
		if (tabDuze[i] != 0) {
			cout << (char) (i + 'A') << " ";

			for (j = 0; j < tabDuze[i]; j++)
				cout << "#";

			cout << " " << tabDuze[i] << endl;
		}
	}

	cout << "\nMale litery:" << endl;
	for (i = 0; i < r; i++) {
		if (tabMale[i] != 0) {
			cout << (char) (i + 'a') << " ";

			for (j = 0; j < tabMale[i]; j++)
				cout << "#";

			cout << " " << tabMale[i] << endl;
		}
	}

	return 0;
}

