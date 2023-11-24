#include "funcaoMasterLista_6.h"

main(){

 int i,indicador = 5, V[indicador];

 printf("Preencha um vetor de 5 espaços, depois eu vou inverte-lo ");

 for( i = 0; i < indicador; i++){
   printf("\n Me de o elemento %d \n",i + 1);
   scanf("%d",&V[i]);
 }

 inverteVetor(V,indicador);

  for( i = 0; i < indicador; i++){
    printf("%d",V[i]);
  }

}
