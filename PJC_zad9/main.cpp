#include <iostream>

using namespace std;

int len(char *napis){

    int c = 0;

		for (int i = 0; i < *napis; i++ ){
            c++;
            napis++;
		}
		return c;

}

 int cmp(char *napis1, char *napis2){

int i;
int s1=len(napis1);
int s2=len(napis2);


 if(s1>s2) return -1;
 if(s2>s1) return 1;
 for(i=0;i<s1;i++)
 if(napis1[i]!=napis2[i])
  break;
 if(i==s1)
 return 0;
 if(napis1[i]>napis2[i]) return 1;

 return -1;

 }

 int norepdig(char *napis){


/*
 int tmp =0;

 char tab[10] = {'1','2','3','4','5','6','7','8','9','0'};

    int z = len(tab);

 for (int i=0; i < len(napis); i++){
 for (int j=0; j < z; j++)
    if (napis[i] == tab[j])
        tmp++;
    return tmp;
  }
   for(i)
*/

/*

    int temp=len(napis);
    int *tab=new int[temp];
    int i,j;

    for(i=0;i<temp;i++)
    tab[i]=0;

    for(i=0;i<temp;++i)
    {
            for(j=0;j<i;++j)
                    if(napis[i]==napis[j]) break;
            tab[j]++;
    }
    for(i=0,j=0;i<temp;i++)
        if(tab[i]==1)
        j++;

        delete[] tab;

        return j;
*/


}


int main(){
    int dl = len("abc");
    cout << dl << endl;

   cout<< cmp("bbc", "abcd")<<endl; //-> 1
   cout<< cmp("abcde", "b") <<endl; //-> -1
   cout<< cmp("abc", "abc") <<endl;//-> 0


   // cout << norepdig("ab3c4d3a1");


    return 0;
}
