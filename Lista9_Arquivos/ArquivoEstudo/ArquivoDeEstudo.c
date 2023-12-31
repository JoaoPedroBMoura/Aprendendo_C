#include <stdio.h>
#include <stdlib.h>

int main()
{

  const int registros = 256;

  struct TASCII
  {
    int codigo;
    char caractere;
  } ascii;

  FILE * arquivo;

  char c, nomeArquivo[80];
  char opcao;
  int i;


  printf("*******************************\n");
  printf("*** Manipulacao de arquivos ***\n");
  printf("*******************************\n\n");
  printf("Informe o nome (com caminho) do arquivo a ser usado:");

  gets(nomeArquivo);

  arquivo = fopen(nomeArquivo, "wb+");

  printf("\nARMAZENANDO DADOS NO ARQUIVO...\n");
  for(i = 1; i < registros; i = i+1)
  {
    ascii.codigo = i-1;
    ascii.caractere = (char)(i-1);
    fwrite(&ascii, sizeof(struct TASCII), 1, arquivo);
  }
  //ADICIONANDO UM REGISTRO AO FINAL DO ARQUIVO
  fseek(arquivo, (registros-1) * sizeof(struct TASCII), 0);
  ascii.codigo = i-1;
  ascii.caractere = (char)(i-1);
  fwrite(&ascii, sizeof(struct TASCII), 1, arquivo);
  printf("\nLENDO DADOS DO ARQUIVO...\n");
  printf("Tabela ASCII:\n");
  rewind(arquivo);
  while(1)
  {
    fread(&ascii, sizeof(struct TASCII), 1, arquivo);
    if (feof(arquivo)) break;
    //S� encontramos o fim de arquivo ap�s tentarmos ler um
    //registro e acabarmos lendo o fim de arquivo
    printf("%d\t%c\n" , ascii.codigo, ascii.caractere);
  }
  fclose(arquivo);
  printf("\nDeseja apagar o arquivo?\n");
  printf("[S]im\n");
  printf("[N]ao\n");
  printf("[S/N]:");
  scanf("\n%c", &opcao);

  if ((opcao == 'S') || (opcao == 's'))
    remove(nomeArquivo);
    system("pause");
  getch();
}
