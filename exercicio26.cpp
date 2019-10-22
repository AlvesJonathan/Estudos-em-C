#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define CENTIMETROS 2.54

int main ()
{

	float total, polegadas;
	
	
	printf("Digite a quantidade de polegadas: ");
	scanf("%f", &polegadas);
	

	
	total=polegadas*CENTIMETROS;
	
	printf("\n\nA polegada informada correspondem a %.2f centimetros\n\n",total);
	
	system("PAUSE");
	return 0;
		
}
