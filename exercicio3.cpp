//lista 2
//questão 3

#include<stdio.h>
#include<stdlib.h>
#include <math.h>


int main ()
{
	float distancia,tempo,media;
	
	printf("Digite a distância:");
	scanf("%f", &distancia);
	printf("Digite o tempo :");
	scanf("%f", &tempo);
	
	media=distancia/tempo;
	printf("\nA velocidade média foi: %.2f KM/H.\nOnde %.2f é a sua velocidade média.\n\n",media,media);
	system ("PAUSE");
	return 0;	
}

