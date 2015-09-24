#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
  
  double c,k,l,d;
  cout<<"c=";
  cin>>c;
  cout<<"k=";
  cin>>k;
  d=exp(2)+((4-sin(c*k))/(pow(sin(k),2)));
  l=((pow(k,2))/pow(4+k,2))+c;
  cout<<"d="<<d<<endl<<"l="<<l<<endl;
  
  system ("PAUSE");
  return EXIT_SUCCESS;
  }
