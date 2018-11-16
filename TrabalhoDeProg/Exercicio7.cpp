#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

float calculoHomem(float altura){
	
	float pesoH = ((72.7 * altura) - 58);
	return(pesoH);
}

float calculoMulher (float altura){
	
	float pesoM = ((62.1 * altura )- 44.7);
	return(pesoM);
	
}


int main(void){
	
	setlocale(LC_ALL,"portuguese");
	
	float altura;
	char sexo;
	float pesoHomem;
	float pesoMulher;
	
	printf("Digite a sua altura em cm: ");
	scanf("%f",&altura);
	fflush(stdin);
	
	printf("Digite o seu sexo H para Homem ou M para mulher [H / M]: ");
	scanf("%c",&sexo);
	fflush(stdin);
	

	if(sexo == 'H' || sexo == 'h'){
		
		pesoHomem = calculoHomem(altura);	
		printf("Peso ideal para um Homem: %.2f\n\n",pesoHomem); 
	}
	
	else if(sexo == 'M' || sexo == 'm'){
		
		pesoMulher = calculoMulher(altura);
		printf("Peso ideal para uma Mulher: %.2f\n\n",pesoMulher);
	}

	
	system("pause");
}
