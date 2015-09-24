#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char *argv[]){
  double x[20],n;
  int k=0,i;
  cout<<"Enter the number of used count"<<endl
  cin>>n;
  for (int i=1; i<=n; i++){
    cout<<"x["<<i<<"]=";
    cin>>x[i];
    }
  for(int i=1; i<=n; i++){
    if(x[i]!=0)
      k++;
      }
  cout<<"k="<<k<<endl;

system ("PAUSE");
return EXIT_SUCCESS;
}
