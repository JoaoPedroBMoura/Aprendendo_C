#include <stdio.h>
#include <stdlib.h>

int comparaDoisNumeros(int n1, int n2){
    int nr;
   if(n1 > n2){
    nr = n1;
   }else nr = n2;

   return nr;
}
int comparaTresNumeros(int n1, int n2, int n3){
  return (comparaDoisNumeros( n1, n2) > n3 ? comparaDoisNumeros( n1, n2) :  n3);
}



main(){

  int nm1,nm2,nm3;

  printf("Me de tres numeros inteiros \n");
  scanf("%d",&nm1);
  scanf("%d",&nm2);
  scanf("%d",&nm3);

  printf("O maior entre esses tres numero e: %d",comparaTresNumeros(nm1,nm2,nm3));

}
