#include "funcaoMaster.h"

 main()
{
 float n1, n2, n3;

 setlocale(LC_ALL,"Portuguese");

 printf("Me de 3 Número para que eu possa formar um triangulo: \n");
 scanf("%f",&n1);
 scanf("%f",&n2);
 scanf("%f",&n3);
 printf("Sobre os Números que você me deu: ");

  switch(verificaTipoTriangulo(n1,n2,n3)){
     case 0 : printf("Não pode ser um tringulo");
     break;
     case  1 : printf("Triangulo Escaleno\n");
     break;
     case 2 : printf("Triangulo Isósceles \n");
     break;
     case 3 : printf("Triangulo  Equilátero\n");
     break;
   }
}
