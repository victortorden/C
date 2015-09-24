#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

double const C=1.231;
double const D=1.152;

int main (int argc, char *argv[]){
  
  double A,x,y;
  cout<<"x=";
  cin>>x;
  cout<<"y=";
  cin>>y;
  
  if(x<y) A=exp(x*y)+D*log(x);
  if(x>=y) A=pow(x*C,1.0/3.0)+log(y);
  
  cout<<"A="<<A<<endl;
  
  system ("PAUSE");
  return EXIT_SUCCESS;
  }
