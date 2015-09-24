#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char *argv[]){
  doule S,l,n,a;
  cout<<"Please, enter a, a=";
  cin>>a;
  cout<<"Please, enter n, n=";
  cin>>n;
  S=0;
  for(int i=1; i<=n; i++){
    S+=pow((a*i+2),2);
    }
  cout<<"S="<<S<<endl;

  system ("PAUSE");
  return EXIT_SUCCESS;
}
