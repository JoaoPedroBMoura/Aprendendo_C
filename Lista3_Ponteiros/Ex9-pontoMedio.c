#include <stdio.h>
#include <stdlib.h>

void pontoMedio(float x1,float y1,float *x2, float *y2){

 float xM,yM;

  xM = (x1 + *x2)/2;
  yM = (y1 + *y2)/2;

  *x2 = xM;
  *y2 = yM;
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
