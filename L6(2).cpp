#include <cstdlib>
#include <iostream>


using namespace std;

int main (int argc, char *argv[]){
  double x[20],b,n,s=0;
  int k=0;
  cout<<"Enter thr number of count which will be used"<<endl<<"Number=";
  cin>>n;
  for(int i=1; i<=n; i++){
    cout<<"x["<<i<<"]=";
    cin>>x[i];
    }
  cout<<"Enter B, B=";
  cin>>b; 
  for(int i=1; i<=n; i++){
    if (b>0){if (x[i]>0) k++}
    else for (i=1; i<=n; i+=2){
      s+=x[i];}}
  
  cout<<"s="<<s<<endl;
  cout<<"k="<<k<<endl;
  

system ("PAUSE");
return EXIT_SUCCESS;
}
