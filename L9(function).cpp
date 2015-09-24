#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

double a=0.11;

double p (double k)
{double p;
p=(pow(log(a*x),2)+tan(a*k))/(a*k);
return p;
}

int main(){
  double a,x,y,z,f;
  y=0.17;
  x=2.13;
  z=0.23;
  
  f=((p(x)+p(y))/p(z))*cos(x);
  
  cout<<"F="<<f<<endl;
  
  system ("PAUSE");
  return EXIT_SUCCESS;
  
