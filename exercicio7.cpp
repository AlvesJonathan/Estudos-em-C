#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float m, c, i, t;

	
	printf("  Digite o valor da Capital inicial:");
	scanf("%f",&c);
	
	printf("  Digite a taxa de Juros:");
	scanf("%f",&i);
	
	printf("  Digite o Tempo:");
	scanf("%f",&t);
	
	m=pow(1+i,t)*c;
	
	printf("\n\n  ***O valor da montante eh: %.2f R$***\n\n",m);
		
	
	system ("PAUSE");
	return 0;
}
