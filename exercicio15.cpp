#include<stdio.h>
#include<stdlib.h>

int main()
{
	float massa, altura, IMC;
	
	printf("Digite sua massa: ");
	scanf("%f",&massa);
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	
	IMC=massa/(altura*altura);
	
	printf("O seu Indice de Massa Corporal (IMC) eh: %.2f\n",IMC);
	system("PAUSE");
	return 0;
}
