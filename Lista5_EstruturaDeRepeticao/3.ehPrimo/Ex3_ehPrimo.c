#include "funcaoMasterDaLista5.h"

main(){
 int number;

 printf("Me de um numero e eu vou dizer se ele � primo ou n�o: \n");
 scanf("%d",&number);

 if(ehPrimo(number)==1){
    printf("Seu n�mero � primo");
 }else{
  printf("Seu n�mero n�o � primo");
 }
}
