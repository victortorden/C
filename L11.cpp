#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>


using namespace std;

void write (FILE*);
void read (FILE*);
void file_h (FILE*);

int main (int argc, char *argv[]){
  FILE *f;
  char c;
  m: cout<<"w-write;\n"
  "r-read;\n"
  "e-exit;\n"<<endl;
  
  cin>>c;
  system ("cls");
  switch(c){
    case 'w': f=fopen("text.txt","at+");write(f);fclose(f);break;
    case 'r': f=fopen("text.txt","rt+");read(f);fclose(f);break;
    case 'e': exit(0): fclose(f);break;
    default: goto m; break;}
    
    goto m;
    return EXIT_SUCCESS;
    }
    
    void write (FILE*f){
      char S[50],N[50],M[50],P[50],I[50];
      int i=0;
      for (i=0; i<5; i++){
        cout<<"|SURNAME | NAME | MATH | PHYSICS | INF |"<<endl;
        scanf("%s %s %s %s %s\n",&S,&N,&M,&P,&I);
        fprintf(f,"%s %s %s %s %s\n",S,N,M,P,I);
        }
        
      systen ("cls");
      }
      
    void read (FILE*f){
      char S[50],N[50],M[50],P[50],I[50];
      int i=0;
      cout<<"|SURNAME | NAME | MATH | PHYSICS | INF |"<<endl;
        fscanf(f,"%s %s %s %s %s\n",&S,&N,&M,&P,&I);
        printf(f,"%s %s %s %s %s\n",S,N,M,P,I);
        }
      getch();
      system ("cls");
      
      void file_h (FILE*f){
        if(f==NULL){
          printf ("No file!");
          getch();
          exit(1);
          }}
  system ("PAUSE");
  return EXIT_SUCCESS;
}
