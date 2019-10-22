#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float valor;
	
	printf("  Digite o valor a ser transformado em log10: ");
	scanf("%f",&valor);
	
	valor= log10(valor);
	printf("\n  O valor digitado em log10 é: %.2f\n\n",valor);
	
	system("PAUSE");
	return 0;
	
	
}
