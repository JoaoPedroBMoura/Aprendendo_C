#include "funcaoMasterDaLista4.h"

main(){

  char letra;

  printf("Me de uma letra e eu vou te dar a sua posi��o no alfabeto: \n");

  scanf("%c",&letra);

  int posicao = posicaoNoAlfabeto(letra);

  printf("A posi��o da sua letra � : %d",posicao);
}
