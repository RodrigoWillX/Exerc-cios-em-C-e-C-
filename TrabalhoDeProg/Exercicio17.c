#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int Q,n1=0,n5=0,n10=0,n25=0,n50=0,n100=0;
	printf("Digite o valor: \n");
	scanf("%d",&Q);
	while(Q>0) {
		if (Q>=100) { Q=Q-100; n100=n100+1; }
		else if (Q>=50) { Q=Q-50; n50=n50+1; }
		else if (Q>=25) { Q=Q-25; n25=n25+1; }
		else if (Q>=10) { Q=Q-10; n10=n10+1; }
		else if (Q>=5) { Q=Q-5; n5=n5+1; }
		else { Q=Q-1; n1=n1+1; }
	}
	printf("%d Notas de 100, %d Notas de 50\n",n100,n50);
	printf("%d Notas de 25, %d Notas de 10\n",n25,n10);
	printf("%d Notas de 5, %d Notas de 1\n",n5,n1);
return0;
}