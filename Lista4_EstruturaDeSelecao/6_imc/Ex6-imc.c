#include "funcaoMasterDaLista4.h"
/*
  Esse código pega a altura e o peso de um individuo e calcula sue IMC. Dependendo do resultado ele terá as seguintes respostas
  0 -> não é obeso
  1 -> Sobre peso
  2 -> Obesidade Grau 1
  3 -> Obesidade grau 2
  4 -> Obesidade Morbida
  Lembre-se que o scanf foi feito para se passar por referencia, por isso sempre se deve usar o &.
*/
main(){
  float altura, peso;

  printf("Me de sua altura: \n");
  scanf("%f",&altura);

  printf("Me de seu peso: \n");
  scanf("%f",&peso);



  switch(imc(peso,altura)){
    case 0 : printf("Você não é obeso");
    break;
    case 1 : printf("Você se encontra em sobre preso");
    break;
    case 2 : printf("Você tem Obesidade Grau 1");
    break;
    case 3 : printf("Você tem Obesidade Grau 2");
    break;
    case 4 : printf("Você tem Obesidade Morbida");
  }

}
