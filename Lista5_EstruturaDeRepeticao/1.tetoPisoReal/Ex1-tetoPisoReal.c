#include "funcaoMasterDaLista5.h"

main(){
  float number1;

  printf("Me de um n�mero decimal que eu vou arredendado: \n");
  scanf("%f",&number1);

  printf("O piso desse n�mero �:  %d",floorF(number1));
  printf("\n O teto desse n�mero �:  %d",ceilF(number1));
}
