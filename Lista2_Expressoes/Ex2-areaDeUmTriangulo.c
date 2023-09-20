#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float radianos(float G){
  const float pI = 3.141592;
  float rad = (pI * G)/180;

  return rad;
}

float areaTrinagulo(float lad1,float lad2,float r){
 float areaT = (lad1 * lad2 * sin(radianos(r)))/2;

 return areaT;
}

main(){

 float ang;
 float lad1;
 float lad2;

 printf("Me de o a medida do lado adjadcente do seu tringulo: ");
 scanf("%f",&lad1);

 printf("Me de o cateto oposto do seu trinagulo: ");
 scanf("%f",&lad2);

 printf("Me de o angulo do seu triangulo: ");
 scanf("%f",&ang);

 printf("A area total do seu trinagulo é: %f",areaTrinagulo(lad1,lad2,ang));
}
