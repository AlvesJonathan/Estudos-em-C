#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	int num, b, total;
	
	printf("Digite um numero para a log:");
	scanf ("%d",&num);
	
	printf("Digite uma base B para essa log:");
	scanf("%d",&b);
	
	total=(num*b);
	
	printf("\n O valor digitado em logb eh:%d\n\n",total);

	system("PAUSE");
	return 0;	
	
}

