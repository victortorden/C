#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

const int n=5;
const int m=2;
const int N=7;

double a=7, c=9, z=0;
int i,j,b[10][10]={{1,1},{1,1},{1,1}};

void Xfun (double x[]){
  double X;
  for(i=1; i<n; i++)
  for(j=1; j<m; j++){
    z+=sin(b[i][j])+c}
    x[i]+a*z;
    z=0;
    }}
double Xsum (double x[10]){
  double X;
  Xfun(x);
  for (i=1; i<n; i++){
    X+=x[i];
    return X;
    }}
double Xmult (double x[10]){
  double X;
  Xfun(x);
  for(i=1; i<n; i++){
    X*=x[i];
  return X
  }}
  
  
int main (int argc, char *argv[]){
  double F=0;
  double x[10];
  
  F=Xmult(x)+(Xsum(x)*a);
  
  cout<<"F="<<F<<endl;
  
  system ("PAUSE");
  return EXIT_SUCCESS;
}
