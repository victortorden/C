#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char *argv[]){
  double x,y,D,MAX;
  cout<<"Enter x, x=";
  cin>>x;
  cout<<"Enter D, D=";
  cin>>D;
  cout<<"Enter maximum x, x=";
  cin>>MAX;
  
  for(double x=x; x<=MAX; x+=0.1){
    y=2*x+tan(x)+exp(x)-log10(2+x);
    cout<<"Y["<<x<<"]="<<y<<endl;
    }

system ("PAUSE");
return EXIT_SUCCESS;
}
