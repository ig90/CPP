#include <iostream>

using namespace std;

void zamien(int *px, int *py)
{
    int *temp=px;
    *px = *py;
    *py = *temp;
}

void zamien(int &x, int &y)
{
    int temp=x;
    x = y;
    y = temp;
}

/*
void fun_tab(char *tab){

    cout<< "elementy tablicy: " <<endl;
    for(int i=0;i<sizeof(tab);i++)
    cout<<*(tab+i)<<" ";

    cout<<""<<endl;
    cout<<"adresy elementów: " << endl;
   // for(int i=0;i<sizeof(tab);i++)
   // cout<<&tab[i]<<" ";
    for(int i=0;i<sizeof(tab);i++)
    cout<<(*tab+i)<<" ";
}
*/

void fun_tab(int *tab, int n){

    cout<< "elementy tablicy: " <<endl;
    for(int i=0;i<n;++i)
    cout<<*(tab+i)<<" ";

    cout<<""<<endl;
    cout<<"adresy elementów: " << endl;
    for(int i=0;i<n;i++)
    cout<<&tab[i]<<endl;

}

int max(int *tab,int n)
{

int i;
int max;
// int suma; ??
max=tab[0];
for(i=0;i<n;i++)
if(tab[i]>max)
max=tab[i];

return max;
}

int main()
{
    int x(2), y(5);

    cout << "wartość x: " << x << ", wartość y: " << y << endl;

    zamien(x,y);

    cout << "wartość x po zamianie: " << x << ", wartość y po zamianie: " << y << endl;

    cout << "wartość x: " << x << ", wartość y: " << y << endl;

    zamien(x,y);

    cout << "wartość x po zamianie: " << x << ", wartość y po zamianie: " << y << endl;

   int tab[9] = {1,2,3,4,5,6,7,8,9};

   int maksymalny = max(tab, 9);

   cout << "element maksymalny tablicy: " <<  maksymalny << endl;


    //  char tab1[] ={'a','b','c','d', '\0'};

    int tab1[] ={1,2,3,4,5};
    fun_tab(tab1, 5);


    return 0;
}


