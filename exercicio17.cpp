#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a, b, c, d, e, f, x, y;
	
	printf("Dado uma equacao linear do tipo: ax+by=c\n                                 dx+ey=f\n\n");
	
	printf("Digite os coeficientes:\n\n");
	
	printf("valor de a:");
	scanf ("%d",&a);
	
	printf("Valor de b:");
	scanf ("%d",&b);
	
	printf("Valor de c:");
	scanf ("%d",&c);
	
	printf("Valor de d:");
	scanf ("%d",&d);
	
	printf("Valor de e:");
	scanf ("%d",&e);
	
	printf("Valor de f:");
	scanf ("%d",&f);
	
	x=(((c*e)-(b*f))/((a*e)-(b*d)));
	
	y=(((a*f)-(c*d))/((a*e)-(b*d)));
	
	
	printf("\n\nO valor de x eh: %d",x);
	printf("O valor de y eh: %d\n\n",y);
	
	system ("PAUSE");
	return 0;
	
	
}
