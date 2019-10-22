#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	float a, b, i, x, resultado;
	
	printf("Na equacao do tipo ax+b=0\n\n");
	printf("defina os valores de:\n\n");
	printf("O valor de A: ");
	scanf("%f", &a);
	printf("O valor de B: ");
	scanf("%f", &b);
	printf("O valor da igualdade: ");
	scanf("%f", &i);
	
	x=((i-b)/a);
	printf("\n\nA raiz da equacao eh %.2f \n\n", x);
	
	system("PAUSE");
	return 0;
		
}
