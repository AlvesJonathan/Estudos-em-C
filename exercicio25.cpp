#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SALARIO 30
#define IMPOSTO 0.08

int main ()
{
	int dias;
	float total, resultado;
	
	
	printf("Digite a quantidade de dias trabalhados: ");
	scanf("%d", &dias);
	

	resultado=(SALARIO*dias)*IMPOSTO;
	total=(SALARIO*dias)-resultado;
	
	printf("\n\nO salario liquido eh: %.2f\n\n", total);
	
	system("PAUSE");
	return 0;
		
}
