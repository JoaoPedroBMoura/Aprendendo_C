#include <stdio.h>
#include <stdlib.h>
# include<math.h>
#include<conio.h>
#include<locale.h>

int floorF(float x){

 int controlador = 0;

     if(x > 0 ){
      while(controlador < x){
        controlador++ ;
      }
          return controlador - 1;
     }else  if(x < 0 ){

       while(controlador >= x){
         controlador-- ;
       }
       return controlador + 1 ;

      }
}

int ceilF(float x){

int controlador = 0;

     if(x > 0 ){
      while(controlador < x){
        controlador++ ;
      }
          return controlador  ;
     }else  if(x < 0 ){

           while(controlador >= x){
             controlador-- ;
           }
       return controlador   ;

      }

}

int potencia(int base, int expoente){
 int regulador = 0;
 int acumulaBase = base;
      while(regulador < expoente - 1){
        acumulaBase = acumulaBase * base;
        regulador++ ;
      }
      return acumulaBase;
}

int ehPrimo(int number){

   int acumulador = 0;
   int divisor = 0;

   if( number > 0){

        while(divisor <= number){

            divisor++;
            if (number%divisor == 0){

                acumulador++;

            }

            if(acumulador >= 3) return 0;

        }

        return 1;

   }

}
