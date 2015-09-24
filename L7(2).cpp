#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char *argv[]){
  double A[5][5],S;
  int i,j,M,P;
  
  cout<<"M="; cin>>M;
  cout<<"P="; cin>>P;
  
  for(i=1; i<=M; i++)
  for(j=1; j<=P; j++){
    cout<<"A["<<i<<"]["<<j<<"]="; cin>>A[i][j];
    }
  S=0;
  for(i=1; i<=M; i++)
  for(j=1; j<=P; j++){
  S+=A[i][j];
  }
  cout<<"Sum="<<S<<endl;

system ("PAUSE");
return EXIT_SUCCESS;
}
