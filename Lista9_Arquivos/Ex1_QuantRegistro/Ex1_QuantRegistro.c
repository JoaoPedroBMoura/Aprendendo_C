#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<locale.h>


void main(){
 int i = 0;

 struct TASCII
  {
    int codigo;
    char caractere;
  } ascii;


 FILE * leituraDeArquivo = fopen("copia.dat","rb"); // criando uma variavel do tipo file/arquivo que armazena o meu arquivo criado. Altere se quiser.


     while(1){
      fread(&ascii,sizeof(struct TASCII),1,leituraDeArquivo); // função que retorna a quant. de  registros lidos com sucesso

           if(feof(leituraDeArquivo)){
            break ;
           }

        i++;
     }

   printf("A quantidade total de registros é %d",i);
}
