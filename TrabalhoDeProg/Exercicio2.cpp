#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void){
	float grauA, grauB, media;
	
	printf("Digite a sua nota do Grau A: ");
	scanf("%f",&grauA);
	
	printf("Digite a sua nota do Grau B: ");
	scanf("%f",&grauB);
	
	media= (grauA + grauB*2)/3;
	
	printf("Sua media foi: %f \n" ,media);
	
	if ( media >= 6.0 ) {
	
		printf("Aprovado! :-) \n");
		
	}else {
		printf("Reprovado! :( \n");
	}
	
	system("pause");
	
}
	

