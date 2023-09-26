#include "funcaoMasterDaLista4.h"

main(){

float number1, number2;
char op;
float resultado;

printf("Me de dois números: \n");
scanf("%f",&number1);
scanf("%f",&number2);
printf("Me de um operado: \n");

scanf("\n");
scanf("%c",&op);

resultado = calculoOperandos(number1,number2,op);

printf("O resultado da sua operação é %.2f",resultado);
}
