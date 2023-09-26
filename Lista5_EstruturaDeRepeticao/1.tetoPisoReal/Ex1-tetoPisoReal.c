#include "funcaoMasterDaLista5.h"

main(){
  float number1;

  printf("Me de um número decimal que eu vou arredendado: \n");
  scanf("%f",&number1);

  printf("O piso desse número é:  %d",floorF(number1));
  printf("\n O teto desse número é:  %d",ceilF(number1));
}
