#include <iostream>

using namespace std;

int main()
{

int a, b, c;

cout << "podaj liczby do porównania: " <<endl;

cin >> a >> b >> c;

if(a>b)
{

   if (a<c)
   {
   cout<<"C jest najwieksze"<<endl;
   }
   else
   {
   cout<<"A jest najwieksze"<<endl;
}

}else
{

   if (b<c)
   {
   cout<<"C jest najwieksze"<<endl;
   }
   else
   {
   cout<<"B jest najwieksze"<<endl;
   }

}
if(a<b)
{
   if (a<c)
   {
   cout<<"A jest najmniejsze"<<endl;
   }

}else
{
   if (b<c)
   {
   if(b<a){
   cout<<"B jest najmniejsze"<<endl;
   }
   }
   else
   {
   cout<<"C jest najmniejsze"<<endl;
   }

}

    return 0;
}
