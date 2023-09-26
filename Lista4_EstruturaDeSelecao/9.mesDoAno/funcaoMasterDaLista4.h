#include <stdio.h>
#include <stdlib.h>
# include<math.h>
#include<conio.h>
#include<locale.h>

int podeSerTriangulo(float n1, float n2, float n3){
  return(n1 + n2 > n3 && n2 + n3 > n1 && n1+n3 > n2 ? 1 : 0);
}

int verificaTipoTriangulo(float L1, float L2, float L3){
  int n;

  if(L1 == L2 && L1== L3){
   n = 3;
  }else if(L1 == L2 || L1 == L3 || L2 == L3){
   n = 2;
  }else if((L1 != L2 || L1 != L3 || L2 != L3)&& podeSerTriangulo(L1,L2,L3)){
   n = 1;
  }else if (podeSerTriangulo(L1,L2,L3)!=1){
   n = 0;
  }

  return n;


}

int imc(float peso, float altura){

  int grauObesidade;
  float media = peso/(altura * altura);

      if( media < 25){
        grauObesidade = 0;
      }else if(media >= 25 && media < 30){
        grauObesidade = 1;
      }else if(media >=30 && media < 35){
        grauObesidade = 2;
      }else if(media >=35 && media < 40){
        grauObesidade = 3;
      }else if(media >= 40){
        grauObesidade = 4;
      }

  return grauObesidade;
}

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


int posicaoNoAlfabeto(char x){

  if(eLetra(x)){
     if(x >= 'A' && x < 'Z'){
        return (x - 'A' ) + 1;
    }else if(x >= 'a'&& x <= 'z'){
        return (x - 'a' ) + 1;
    }else{
        return 0;
    }

  }
}

float calculoOperandos(float x1,float x2,char op){
  float resultado = 0;

   switch(op){

   case '+' : resultado = x1 + x2;
   break;

   case '-' : resultado = x1 - x2;
   break;

   case '*' : resultado = x1 * x2;
   break;

   case 'x' : resultado = x1 * x2;
   break;

   case 'X' : resultado = x1 * x2;
   break;

   case '/' : resultado = x1 / x2;
   break;

   case ':' : resultado = x1 / x2;
   break;

   }

   return resultado;
}

char* mesDoAno(int mes){

 switch(mes){
   case 1 : return "Janeiro";
   break;

   case 2 : return "Fevereiro";
   break;

   case 3 : return "Março";
   break;

   case 4 : return "Abril";
   break;

   case 5 : return "Maio";
   break;

   case 6 : return "Junho";
   break;

   case 7 : return "Julho";
   break;

   case 8 : return "Agosto";
   break;

   case 9 : return "Setembro";
   break;

   case 10 : return "Outubro";
   break;

   case 11 : return "Novembro";
   break;

   case 12 : return "Dezembro";
   break;

   default : return "";
 }

}
