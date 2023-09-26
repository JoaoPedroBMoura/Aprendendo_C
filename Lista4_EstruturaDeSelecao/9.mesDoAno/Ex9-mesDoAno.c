#include "funcaoMasterDaLista4.h"

main(){
 int numeroMes;
 char* mes;
 mes = (char *)malloc(sizeof(char));

 printf("Me de o número correspondente do mês em que você se encontra: \n");
 scanf("%d",&numeroMes);
 printf("O mês que você se encontra é: %s", mesDoAno(numeroMes));

 free(mes);
 getch();
}
