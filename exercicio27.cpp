#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14

int main ()
{

	float area, perimetro, raio;
	
	
	printf("Digite o perimetro do circulo: ");
	scanf("%f", &perimetro);
	
	raio=perimetro/(2*PI);
	
	area=PI*(raio*raio);
	
	printf("\n\nA area do circulo equivale a %.2f metros quadrados\n\n", area);
	
	system("PAUSE");
	return 0;
		
}
