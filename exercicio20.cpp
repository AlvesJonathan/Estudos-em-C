#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	float catetoa, catetob, hipotenusa;
	
	
	printf("Digite o valor de cateto A: ");
	scanf("%f", &catetoa);
	printf("Digite o valor de cateto B: ");
	scanf("%f", &catetob);
	
	hipotenusa=sqrt((catetoa*catetoa)+(catetob*catetob));
	
	printf("\nO valor da hipotenusa eh: %.2f\n\n",hipotenusa);
	
	system("PAUSE");
	return 0;
		
}
