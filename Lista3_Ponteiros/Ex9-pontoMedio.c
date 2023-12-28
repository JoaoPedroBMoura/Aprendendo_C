#include <stdio.h>
#include <stdlib.h>

void pontoMedio(float x1,float y1,float *x2, float *y2){

 float xM,yM;

  xM = (x1 + *x2)/2;
  yM = (y1 + *y2)/2;

  *x2 = xM;
  *y2 = yM;

  /*
       Não, a alocação de memória não poderia ter sido feita dentro do módulo "pontoMedio".
       Isso porque a função `pontoMedio` recebe ponteiros como parâmetros, e não endereços de variáveis.
       Se você tentasse alocar memória dentro da função `pontoMedio`,
       você estaria alterando os valores dos ponteiros locais da função,
       e não os valores dos ponteiros que foram passados como argumentos.
       Isso causaria um erro de segmentação, pois você estaria tentando acessar uma área de memória inválida. A
       lém disso, a memória alocada dentro da função `pontoMedio` seria perdida quando a função terminasse,
       pois os ponteiros locais sairiam do escopo. Portanto, a alocação de memória deve ser feita fora da função `pontoMedio`,
       e os ponteiros alocados devem ser passados como argumentos para a função.
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

  printf("Os pontos médios entre esses dois ponto: \n \n %.2f e %.2f \n", xSd,ySd);
}
