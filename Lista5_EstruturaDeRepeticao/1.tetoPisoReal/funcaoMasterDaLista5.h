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


