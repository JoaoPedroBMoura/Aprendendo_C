#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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

void multiplicaVetorPeloIndice(int vetor[],int colunas){
  int i;

  for( i = 0; i < colunas; i++){
    vetor[i] = vetor[i]  * (i);
  }
}

void multiplicaVetorIndicePonteiro(int *vetor,int coluna){

  int i;

  for(i = 0; i < coluna; i++){
    vetor[i] = vetor[i] * (i);
  }
 }

void ordenador(int vetor[], coluna){
  int i, aux;

     aux = vetor[0]

  for(i = 0; i< coluna ; i++ ){

     if(vetor[i] > aux){
        aux = vetor[i];
     }
  }
}
