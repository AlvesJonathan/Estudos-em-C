#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main ()
{
	float distancia, combustivel, total;
	
	
	printf("Digite a distancia percorrida pelo veiculo: ");
	scanf("%f", &distancia);
	printf("Digite o combustivel gasto pelo veiculo: ");
	scanf("%f", &combustivel);
	
	total=distancia/combustivel;
		
	printf("\nO consumo medio do veiculo eh de: %.2fKM por Litro\n\n",total);
	
	system("PAUSE");
	return 0;
		
}
