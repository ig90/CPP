#include <iostream>

using namespace std;

void bubble(int *tab, const int n){

for (int i=1; i<n; i++)
    for (int j=n-1; j>=i; j--)

        if (tab[j]<tab[j-1]){

            int tmp=tab[j-1];
            tab[j-1]= tab[j];
            tab[j]=tmp;

        }

}

void mix(int* a, int m, int* b, int n){


const int r = (m+n);

int tmp[r];


for (int i=0; i<m; ++i){

        tmp[i] = a[i];
}

for(int i=0;i<n;++i){

    tmp[m+i] = b[i];
}


bubble (tmp, r);


        for(int k=0; k<m;k++){

            a[k]=tmp[k];
        }

        for(int i=0; i<n; i++){

                b[i] = tmp[m+i];

        }

}

int main(int argc, char** argv) {


    int a[6] = {1, 2, 2, 3, 5, 6};
    int b[4] = {2, 4, 5, 8};

    mix(a,6,b,4);

    for(int r=0;r<6;r++)cout<< a[r]<<", ";
    cout<<" " << endl;
    for(int r=0;r<4;r++)cout<< b[r]<<", ";

 return 0;
}
