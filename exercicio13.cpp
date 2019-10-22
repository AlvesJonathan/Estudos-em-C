#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	int a, b, c, diagonal,resultado;
	
	printf(" Digite o valor da aresta a: ");
	scanf("%d",&a);
	
	printf(" Digite o valor da aresta b: ");
	scanf("%d",&b);
	
	printf(" Digite o valor da aresta c: ");
	scanf("%d",&c);
	
	diagonal=(a*a)+(b*b)+(c*c);
	resultado=sqrt(diagonal);
	
	printf("\n O valor da Diagonal desse Paralelepipedo Retangulo eh: ** %d **\n\n",resultado);
	
	system("PAUSE");
	return 0;	
	
}
