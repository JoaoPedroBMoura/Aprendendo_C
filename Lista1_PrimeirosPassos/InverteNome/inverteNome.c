#include <stdio.h>
#include <stdlib.h>

/*
 João Pedro Barcellos Moura. 07/08/2023
*/

char* inverteNome(char* nome1, char* nome2){
  printf("%s,%s", nome2,nome1);
}

main(){

 char* pNome,*sNome;

 pNome = (char*)malloc(sizeof(char));
 sNome = (char*)malloc(sizeof(char));

 printf("Escreva o primeiro nome: ");
 gets(pNome);

 printf("Esceva o sobrenome: ");
 gets(sNome);

  inverteNome(pNome,sNome);
 free(pNome);
 free(sNome);




}
