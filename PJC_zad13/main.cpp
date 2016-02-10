#include <iostream>
#include <cstring>

using namespace std;


char* rev(char *str, int n){

int k = strlen(str)-1;

 for (int i = 0, tmp; i<k; i++, k--){

    if (k==n){

        k--;
    }
    if (i==n){

        i++;
    }

    tmp = str[i];
    str[i] = str[k];
    str[k] = tmp;

 }

}

int main()
{

 char str1[] = "Witaj cpp", *str2;

 cout << str1 << endl;    // Witaj cpp

 str2 = rev(str1, 8);     //  Pierwszy znak napisu str1 ma pozycję 0, ostatni ma pozycję 8

 cout << str1 << endl;    // pc jatiWp

 cout << str2 << endl;    // pc jatiWp


    return 0;
}
