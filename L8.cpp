#include <cstdlib>
#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main (int argc, char *argv[]){
  char text [100];
  cout<<"Text: ";
  gets (text);
  int n=0;
  for (int i=0; i<strlen(text); i++){
    if (isdigit(text[i])) n++;
    }
  cout<<"Number of digits: "<<n<<endl;
  
  system ("PAUSE");
  return EXIT_SUCCESS;
  
