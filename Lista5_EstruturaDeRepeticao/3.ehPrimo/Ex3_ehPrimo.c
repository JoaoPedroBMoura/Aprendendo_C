#include "funcaoMasterDaLista5.h"

main(){
 int number;

 printf("Me de um numero e eu vou dizer se ele é primo ou não: \n");
 scanf("%d",&number);

 if(ehPrimo(number)==1){
    printf("Seu número é primo");
 }else{
  printf("Seu número não é primo");
 }
}
