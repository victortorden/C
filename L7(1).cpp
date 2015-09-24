#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char *argv[]){
  double A[5][5],XMAX,M,P;
  int i,j;
  
  cout<<"M="; cin>>M;
  cout<<"P="; cin>>P;
  
  for(i=1; i<=M; i++)
  for(j=1; j<=P; j++){
    cout<<"A{"<<i<<"]["<<j<<"]=";
    cin>>A[i][j];
    }
  cout<<"j="; cin>>j;
  XMAX=0;
  for(int i=1; i<=M; i++){
    if (A[i][j]>XMAX) XMAX=A[i][j];}
  cout<<"X="<<XMAX<<endl;


system ("PAUSE");
return EXIT_SUCCESS;
}
