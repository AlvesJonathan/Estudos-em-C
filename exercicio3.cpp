//lista 2
//quest�o 3

#include<stdio.h>
#include<stdlib.h>
#include <math.h>


int main ()
{
	float distancia,tempo,media;
	
	printf("Digite a dist�ncia:");
	scanf("%f", &distancia);
	printf("Digite o tempo :");
	scanf("%f", &tempo);
	
	media=distancia/tempo;
	printf("\nA velocidade m�dia foi: %.2f KM/H.\nOnde %.2f � a sua velocidade m�dia.\n\n",media,media);
	system ("PAUSE");
	return 0;	
}

