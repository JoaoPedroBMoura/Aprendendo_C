#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaDelta(float A,float B, float C){
 float delta = pow(B,2) - (4) * (A*C);
 return delta;
}

main(){
 float A,B,C;

 printf("Me de tr�s termos de uma equa��o de segundo grau e eu lhe darei o seu Delta. ");
 scanf("%f",&A);
 scanf("%f",&B);
 scanf("%f",&C);

 printf("Seu delta � : %f",calculaDelta(A,B,C));
}
