#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( )
{
float xa, xb,ya, yb;
float distancia; /* Declaração de Variaveis */

printf("Digite o valor de xa\n");
scanf("%f", &xa);
printf("Digite o valor de xb\n");
scanf("%f", &xb);
printf("Digite o valor de ya\n");
scanf("%f", &ya);
printf("Digite o valor de yb\n");
scanf("%f", &yb); /* Entrada de dados */


distancia=sqrt(pow((xb-xa),2)+pow((yb-ya),2)); /* Distancia entre dois pontos do plano cartesiano */
printf("A distancia entre os pontos e %f\n", distancia);
system("pause");

}