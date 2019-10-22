//lista 2
//exercicio 5

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main ()
{
	float passagem, dias, total;
	
	printf("Digite o valor da passagem:");
	scanf("%f", &passagem);
	printf("Digite a quantidade de dias:");
	scanf("%f", &dias);
	
	total=passagem*dias;
	printf("\nO valor total da passagem eh: %.2f R$\n\n",total);
	
	system ("PAUSE");
	return 0;
	
	
}
