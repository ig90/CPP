#include <iostream>
#include <cstring>

using namespace std;


void cp(char *str2, const char *str1){

    for(int i=0; ; i++){

        str2[i] = str1[i];
        if (str2[i] == NULL ) break;

}
    for (int i = strlen(str1)-1; i >= 0; i--) {
        *str2 = *(str1+i);
        *str2++;
    }
/*
    char *pocz = str2, *kon = str2 + strlen(str2)-1;
    char c;

    while (pocz < kon){
    c = *pocz;
    *pocz = *kon;
    *kon = c;
    ++pocz;
   --kon;

    }
*/
}

int main(){

 const char *str1 = "ppC";

 char str2[10] = "Witaj";


 cout << str2 << endl;    // Witaj

 cp(str2,str1);

 cout << str2 << endl;    // Cpp

 cp(str2,"CJP");

 cout << str2 << endl;    // PJC

    return 0;
}
