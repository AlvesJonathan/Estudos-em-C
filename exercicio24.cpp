#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>

int main ()
{
	int a, b, c;
	float resultado1, resultado2, total;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Dadas as expres�es: R=(A+B)�, S=(B+C)� e D=R+S/2 \n\n");
	
	printf("Informe o valor de A: ");
	scanf("%d", &a);
	printf("Informe o valor de B: ");
	scanf("%d", &b);
	printf("Informe o valor de C: ");
	scanf("%d", &c);
	
	resultado1=pow(a+b,2);
	resultado2=pow(b+c,2);
	total=(resultado1+resultado2)/2;
	
	
	printf("\n\nO resultado da express�o R=(A+B)� �: %.2f\n", resultado1);
	printf("\n\nO resultado da express�o S=(B+C)� �: %.2f\n", resultado2);
	printf("\n\nO resultado final da express�o D=R+S/2 �: ** %.2f **\n\n", total);
	
	system("PAUSE");
	return 0;
		
}
