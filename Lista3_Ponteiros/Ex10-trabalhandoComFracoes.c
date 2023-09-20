#include <stdio.h>
#include <stdlib.h>

void soma(int *n1,int n2,int *d1,int d2){
   int numerador  = ((*n1 * d2) + (n2 * *d1));
  int denominador =(*d1 * (d2));

   *n1 = numerador;
   *d1 = denominador;
}

void diferenca(int *n1,int n2,int *d1,int d2){
    int numerador = (*n1 * d2 - n2 * *d1);
  int denominador = (*d1 * d2);

   *n1 = numerador;
   *d1 = denominador;
}

void produto(int *n1,int n2,int *d1,int d2){
  int numerador = (*n1 * n2 );
  int denominador = (*d1 * d2);

   *n1 = numerador;
   *d1 = denominador;
}

void divisao(int *n1,int n2,int *d1,int d2){
  int numerador = (*n1 * d2 );
  int denominador = (*d1 * n2);

   *n1 = numerador;
   *d1 = denominador;
}
main(){

 int nP,dP,nS,dS;

 printf("Bem vindo. Iremos fazer as quatro operações matemáticas com números racionais. \n Escolha número a número, primeiro os dois numeradores e depois os dois denominadores: \n");

 printf("Vamos somar: \n");
 printf("1º Numerador: \n");
 scanf("%d",&nP);
 printf("2º Numerador: \n");
 scanf("%d",&nS);
 printf("1º Denominador: \n");
 scanf("%d",&dP);
 printf("2º Denominador: \n");
 scanf("%d",&dS);

 soma(&nP,nS,&dP,dS);

 printf("O resultado da soma é : \n %d/%d ",nP,dP);
}


