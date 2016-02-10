#include <iostream>
#include <cstring>

using namespace std;


char* trim(char *str)
{
    int k = strlen(str);

         for (int i = 0, tmp; i<k; i++){

        //  if (str[i]==' '){

        while (str[i]==' '){

                *str=str[++i];
                 str++;
            }


          /*  if (str[i]==' '){

                tmp = str[i];
                str++;

            }
            */
    }
       return str;

}

int main()
{

    char str[] = "   Witaj cpp", *newstr;

    cout << "start" << str << "end" << endl;    // start   Witaj cppend

    newstr = trim(str);

    cout << "start" << str << "end" << endl;    // startWitaj cppend

    cout << "start" << newstr << "end" << endl;    // startWitaj cppend

    return 0;
}
