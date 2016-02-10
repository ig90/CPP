#include <iostream>

using namespace std;


int** pascal(int n){


 int **p;
  p= new int *[n];
  for (int j=0;j<n;j++)
  {
    p[j]=new int [j+1];
    p[j][0]=1;
    p[j][j]=1;

    for (int i=0; i<j-1; i++)
      p[j][i+1]=p[j-1][i]+p[j-1][i+1];
     // cout<< **p << endl;
  }


}

void usun(int n, int **pas){

delete [][]pas;

}


int main()
{


pascal(6);


    return 0;
}
