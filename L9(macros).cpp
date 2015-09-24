#include <cstdlib>
#include <iostream>
#include <math.h>
#define p(k) ((pow(log(a*k),2)+tan(a*k))/(a*k))

using namespace std;

int main (int argc, char *argv[]){
  double a,y,z,x,f;
  a=0.11;
  x=2.13;
  y=0.17;
  z=0.23;
  
  f=((p(x)+p(y))/p(z))*cos(x);
  
  cout<<"F="<<f<<endl;
  
  system ("PAUSE");
  return EXIT_SUCCESS;
}
