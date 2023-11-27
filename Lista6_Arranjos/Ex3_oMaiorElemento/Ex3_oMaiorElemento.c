#include "funcaoMasterLista_6.h"
 const colun = 5;
main(){
   int vetorTeste[colun];

   for(int i = 0; i < colun; i++){

     printf("Me de o valor que deve ser colocado na posição %d : \n", i  );
     scanf("%d",&vetorTeste[i]);

   }

    ordenador(vetorTeste, colun);

    for (int i = 0; i < colun; i++){
        printf(vetorTeste[i]);
    }
}
