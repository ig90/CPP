#include <iostream>
#include <cstring>

using namespace std;

typedef char* (*F)(char*, int);

char* odwroc(char* nap, int n) {
	char tmp;
	for (int i = 0; i < strlen(nap)/2; i++) {
		if (i != n && strlen(nap)-i-1 != n) {
			tmp = nap[i];
			nap[i] = nap[strlen(nap)-i-1];
			nap[strlen(nap)-i-1] = tmp;
		}
	}
	return nap;
}

char* male(char* nap, int n) {
	for (int i = 0; i < strlen(nap); i++) {
		if (i != n && isalpha(nap[i]))
			nap[i] = tolower(nap[i]);
	}
	return nap;
}

char* modyfikuj(F f, int i, char *txt) {
	return f(txt, i);
}

int main(void) {
	char napis[] = "abcd1234ABCD";
	int i = 2;

	cout << "modyfikuj(\"" << napis << "\", " << i << ", odwroc):\n";
	cout << "--> " << modyfikuj(odwroc, i, napis) << endl << endl;

	cout << "modyfikuj(\"" << napis << "\", " << i << ", male):\n";
	cout << "--> " << modyfikuj(male, i, napis) << endl << endl;


	return 0;
}
