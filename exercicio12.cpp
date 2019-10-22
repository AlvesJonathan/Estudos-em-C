#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int altura, base, area;
	
	printf(" Digitre a ALTURA do triangulo:");
	scanf("%d",&altura);
	
	printf(" Digite a BASE do triangulo");
	scanf("%d",&base);
	
	area=(altura*base)/2;
	
	printf(" \n A AREA do tringulo eh: **%d**\n\n",area);
	
	system("PAUSE");
	return 0;
	
}

