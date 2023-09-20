#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float converteCelsius(float temp){
 float fahren = 1.8 * temp + 32;
 return fahren;
}

main(){

  float celsius;

  printf("Me de a temperatura presente em Celsius: ","\n");
  scanf("%f",&celsius);

  printf("Em Fahrenheit é: %f", converteCelsius(celsius));
}
