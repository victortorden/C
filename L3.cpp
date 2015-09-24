#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char *argv[]){
  int A,B;
  cout<<"enter A ";
  cin>>A;
  cout<<"enter B ";
  cin>>B;
  
  switch (A){
    case 1: switch (B){
      case 1: cout<<"1";break;
      case 0: cout<<"0";break;
      default: cout<<"mistake";}break;
    case 0: switch (B){
      case 1: cout<<"0";break;
      case 0: cout<<"0";break;
      default: cout<<"mistake";}break; 
    default: cout<<"mistake";break}
  cout<<endl;
  
  system ("PAUSE");
  return EXIY_SUCCESS;
  
