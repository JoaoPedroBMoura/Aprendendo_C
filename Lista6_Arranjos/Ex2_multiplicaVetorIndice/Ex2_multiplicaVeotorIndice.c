#include "funcaoMasterLista_6.h"

main(){

 int i, coluna, vetor[50], *vetorPont;

 printf("Quantas colunas nosso vetor terá ? : \n");
 scanf("%d",&coluna);

 for(i = 0; i < coluna; i++){
   printf("Me de o elemento %d \n",i);
   scanf("%d",&vetor[i]);
 }

  multiplicaVetorPeloIndice(vetor, coluna);

   for (i = 0; i < coluna; i++){
     printf("|%d",vetor[i]);

   }

   printf("\n");

   vetorPont = (int *)malloc(sizeof(int[coluna]));

   for(i = 0; i < coluna; i++){

     printf("Me de o elemento %d \n",i);
     scanf("%d",&vetorPont[i]);

   }

    multiplicaVetorIndicePonteiro(vetorPont, coluna);

   for(i = 0; i < coluna; i++){
      printf("|%d", vetorPont[i]);
   }

   free(vetorPont);
}
