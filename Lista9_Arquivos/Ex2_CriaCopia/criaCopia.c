#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<locale.h>

main(){

 struct TASCII
  {
    int codigo;
    char caractere;
  } ascii, aux;

 int contador, resposta;

 contador = 0;

 FILE *arquivo = fopen("C:\\users\\joaop\\documents\\programação\\aprendendo_C\\lista9_Arquivos\\ex2_CriaCopia\\teste.dat","rb+");


 printf("Deseja criar uma cópia do arquivo ? \n S = 1, N = 0 \n");
 scanf("%d",&resposta);


      FILE * copiaArquivo =  fopen("copia.dat","wb+");


      while(1){
         fread(&ascii,sizeof(struct TASCII ),1,arquivo);
         fwrite(&ascii,sizeof(struct TASCII ),1,copiaArquivo);

         if(feof(arquivo)){
            break;
         }

      }

}
