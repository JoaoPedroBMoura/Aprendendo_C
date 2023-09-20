#include <stdio.h>
#include <stdlib.h>

char* textoP(char* x){
 printf("%s",x);
}

main(){
 char* texto;

  texto =(char*)malloc(sizeof(char));

  printf("Escreva alguma coisa: ");
  gets(texto);


  textoP(texto);

free(texto);
}
