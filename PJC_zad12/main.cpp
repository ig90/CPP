#include <iostream>
#include <cstring>

using namespace std;


void app(char *str2, const char *str1){
    while (*str2 != '\0') {
        str2++;
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

 const char *str1 = "ppC ";

 char str2[20] = "Witaj";

 cout << str2 << endl;    // Witaj

 app(str2, str1);

 cout << str2 << endl;    // Witaj Cpp

 app(str2, "CJP ");

 cout << str2 << endl;    // Witaj Cpp PJC


    return 0;
}
