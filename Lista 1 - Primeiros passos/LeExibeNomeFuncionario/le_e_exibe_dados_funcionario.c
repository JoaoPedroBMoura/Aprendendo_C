#include <stdio.h>
#include <stdlib.h>


 void dadosFuncionario(char* nome, int diaNasceu,char* mesNasceu,int anoNasceu,float salario, char chef){
   printf("O funcionário %s, nascido no dia %d/%s/%d,recebe de salario de R$ %f, se ele é um chef ? %c",nome,diaNasceu,mesNasceu,anoNasceu,salario,chef);
 }
main(){

 char* nomeFunc,* mesNasci;

 int diaNasc,anoNasc;

 float salario;

 char chefOrNot;

  nomeFunc = (char*)malloc(sizeof(char));
  mesNasci = (char*)malloc(sizeof(char));

  printf("Qual o nome do funcionário ?");
  gets(nomeFunc);

  printf("Dia de Nascimento: ");
  scanf("%d", &diaNasc);


  printf("Mês de Nascimento: ");
  scanf("\n");
  gets(mesNasci);

  printf("Anos de Nascimento: ");
  scanf("%d", &anoNasc);


  printf("Qual será seu salário ? ");
  scanf("%f", &salario);

  printf("Ele é um dos chefs ? ");
  scanf("\n");
  chefOrNot = getchar();

  dadosFuncionario(nomeFunc,diaNasc,mesNasci,anoNasc,salario,chefOrNot);

  free(nomeFunc);
  free(mesNasci);

}
