#include<stdio.h>
#include<stdlib.h>

int main()
{
	int primeira;
	int segunda;
	int auxiliar;
	
	printf ("Digite o valor da primeira variavel: ");
	scanf("%d",&primeira);
	printf ("Digite o valor da segunda variavel: ");
	scanf("%d",&segunda);
	
	auxiliar=primeira;
	primeira=segunda;
	segunda=auxiliar;
	
	printf("\n\nValor da primeira: %d\n",primeira);
	printf("Valor da segunda: %d\n\n",segunda);
	system("PAUSE");
	return 0;
}
