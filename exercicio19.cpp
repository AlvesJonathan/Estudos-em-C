#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	float celsius, fahrenheit, conversao;
	
	
	printf("Digite os graus em fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	conversao=(fahrenheit-32)/1.8;
		
	printf("O valor dos graus digitados em celsius eh: %.2f\n\n",conversao);
	
	system("PAUSE");
	return 0;
		
}
