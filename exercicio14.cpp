#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	int termo, razao, num, calculo;
	
	printf("Digite o primeiro termo da PA:");
	scanf("%d",&termo);
	
	printf("Digite o numero de termos da PA:");
	scanf("%d",num);
	
	printf("Digite a razao dessa PA:");
	scanf("%d",&razao);
	
	calculo=termo+(num*razao);
	
	printf("O termo geral dessa PA eh:%d\n\n",calculo);
	
	system("PAUSE");
	return 0;	
	
}
