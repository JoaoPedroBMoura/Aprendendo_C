#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float radianos(float G){
  const float pI = 3.141592;
  float rad = (pI * G)/180;

  return rad;
}
main(){
 float grau;

 printf("Qual o angulo em graus? \n");
 scanf("%f",&grau);


 printf("Esse é seu valor em radiano: %f", radianos(grau),"\n");


}
