#include <stdio.h>
#include <stdlib.h>

int vogal(char l){

    int p = 0;

    if(l == 'a' || l == 'A' ||
       l == 'e' || l == 'E' ||
       l == 'i' || l == 'I' ||
       l == 'o' || l == 'O' ||
       l == 'u' || l == 'U' ) {

        p = 1;

    }
    return p;
}
int letraMiniscula(char l){

    int p = 0;

       if( l >= 'a' && l <= 'z') {

         p = 1;

       }
    return p;

 }
int letraMaiscula(char l){

  int p = 0;

       if( l >= 'A' && l <= 'Z') {

         p = 1;

       }
    return p;

}
int eLetra(char l){


 int p = 0;

       if( letraMaiscula(l) || letraMiniscula(l)) {

         p = 1;

       }
    return p;

}
int eConsoante(char l){

   int p = 0;

       if( eLetra(l) && !(vogal(l))) {

         p = 1;

       }
    return p;

}

main(){

  char l;

  printf("Me de uma letra \n \n");
  l = getchar();

  printf("\nDizer que sua letra is vogal is: ");

  if(vogal(l)){
     printf("Verdadeiro \n");
  }else {
      printf("Falso \n");
   }

   printf("\nDizer que sua letra is Letra Miniscula is: ");

  if(letraMiniscula(l)){
     printf("Verdadeiro \n");
  }else {
    printf("Falso \n");
   }

    printf("\nDizer que sua letra is Letra Maiuscula is: ");

  if(letraMaiscula(l)){
     printf("Verdadeiro \n");
  }else {
    printf("Falso \n");
   }

    printf("\nDizer que sua letra is Letra is: ");

  if(eLetra(l)){
     printf("Verdadeiro \n");
  }else {
    printf("Falso \n");
   }

    printf("\nDizer que sua letra is Consoante is: ");

  if(eConsoante(l)){
     printf("Verdadeiro \n");
  }else {
    printf("Falso \n");
   }

}
