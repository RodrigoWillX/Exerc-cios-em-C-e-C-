#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void){
	float numeroum, numerodois, media;
	
	printf("Digite um numero: ");
	scanf("%f",&numeroum);
	
	printf("Digite outro numero: ");
	scanf("%f",&numerodois);
	
	media= (numeroum + numerodois)/2;
	
	printf("A media eh: %f \n" ,media);
	
}