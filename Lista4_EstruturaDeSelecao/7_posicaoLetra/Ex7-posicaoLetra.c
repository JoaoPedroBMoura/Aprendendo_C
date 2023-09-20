#include "funcaoMasterDaLista4.h"

main(){

  char letra;

  printf("Me de uma letra e eu vou te dar a sua posição no alfabeto: \n");

  scanf("%c",&letra);

  int posicao = posicaoNoAlfabeto(letra);

  printf("A posição da sua letra é : %d",posicao);
}
