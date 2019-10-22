//exercio 4


#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main ()
{
	float trecho1, trecho2, tempo1, tempo2, total;
	
	printf("Digite o KM do trecho 1:");
	scanf("%f", &trecho1);
	printf("Digite o KM do trecho 2:");
	scanf("%f", &trecho2);
	
	printf("\nDigite o TEMPO do trecho 1:");
	scanf("%f", &tempo1);
	printf("Digite o TEMPO do trecho 2:");
	scanf("%f", &tempo2);
	
	
	total=(trecho1+trecho2)/(tempo1+tempo2);
	printf("\nA velocidade média foi: %.2f KM/H\n\n",total);
	
	system ("PAUSE");
	return 0;
	
	
}
