#include<stdio.h>
#include<stdlib.h>
# include<math.h>
#include<conio.h>
#include<locale.h>

void inverteVetor(int vetor[],int colunas){
  int intermediario = 0, i, aux = 1;

  for( i = 0 ; i < colunas /2; i ++){
    intermediario = vetor[i];
    vetor[i] = vetor[colunas - aux ];
    vetor[colunas - aux] = intermediario;
    aux ++;
  }

}
