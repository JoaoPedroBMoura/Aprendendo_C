#include <stdio.h>
#include <stdlib.h>

int divisores(int n1, int n2){

   int n = 0;
   if(n1%n2 == 0){
    n = 1;
   }
 return n;
}


int ePar(int n1){
  int n = 0;
   if(n1%2 == 0){
    n = 1;
   }
 return n;
}


main(){
 int n1,n2;

 printf("Me de dois numeros: \n");
 scanf("%d",&n1);
 scanf("%d",&n2);

 if(ePar(n1)){
   printf("O Primeiro e par  \n");
  }else {
      printf("O primeiro Nao e par \n");
   }

  if(ePar(n2)){
    printf("O Segundo e par  \n");
  }else {
      printf("O Segundo Nao e par \n");
   }

   if(divisores(n1,n2)){
     printf("O primeiro é divisivel pelo segundo  \n");
  }else {
      printf("O primeiro nao e divisivel pelo segundo \n");
   }


}
