#include <stdio.h>
#include <stdlib.h>

void pontoMedio(float x1,float y1,float *x2, float *y2){

 float xM,yM;

  xM = (x1 + *x2)/2;
  yM = (y1 + *y2)/2;

  *x2 = xM;
  *y2 = yM;

  /*
       N�o, a aloca��o de mem�ria n�o poderia ter sido feita dentro do m�dulo "pontoMedio".
       Isso porque a fun��o `pontoMedio` recebe ponteiros como par�metros, e n�o endere�os de vari�veis.
       Se voc� tentasse alocar mem�ria dentro da fun��o `pontoMedio`,
       voc� estaria alterando os valores dos ponteiros locais da fun��o,
       e n�o os valores dos ponteiros que foram passados como argumentos.
       Isso causaria um erro de segmenta��o, pois voc� estaria tentando acessar uma �rea de mem�ria inv�lida. A
       l�m disso, a mem�ria alocada dentro da fun��o `pontoMedio` seria perdida quando a fun��o terminasse,
       pois os ponteiros locais sairiam do escopo. Portanto, a aloca��o de mem�ria deve ser feita fora da fun��o `pontoMedio`,
       e os ponteiros alocados devem ser passados como argumentos para a fun��o.
       (fonte: BING by Microsoft)
   */
}
main(){

 float xPr, yPr,xSd,ySd;

  printf("Me de as cordenadas do seu ponto incial : \n");
  scanf("%f",&xPr);
  scanf("%f",&yPr);

  printf("Me de as cordenadas do seu ponto final : \n");

  scanf("%f",&xSd);
  scanf("%f",&ySd);

  pontoMedio(xPr,yPr,&xSd,&ySd);

  printf("Os pontos m�dios entre esses dois ponto: \n \n %.2f e %.2f \n", xSd,ySd);
}
