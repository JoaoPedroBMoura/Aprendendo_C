#include "funcaoMasterDaLista4.h"

main(){
 int numeroMes;
 char* mes;
 mes = (char *)malloc(sizeof(char));

 printf("Me de o n�mero correspondente do m�s em que voc� se encontra: \n");
 scanf("%d",&numeroMes);
 printf("O m�s que voc� se encontra �: %s", mesDoAno(numeroMes));

 free(mes);
 getch();
}
