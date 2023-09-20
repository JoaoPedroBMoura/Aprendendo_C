#include <stdio.h>
#include <stdlib.h>

float modulo(float n){

 float n1 = n;

 if(n < 0){
   n1 = n * (-1);
 }

 return n1;
}

main(){
 float n;

 printf("Me de um numero e eu te darei o seu modulo. \n");
 scanf("%f",&n);

 printf("O modulo desse numero e %.2f",modulo(n));

}
