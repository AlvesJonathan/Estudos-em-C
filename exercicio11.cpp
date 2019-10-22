#include<stdlib.h>
#include<math.h>
#include<stdio.h>



int main ()
{
	float salario, gasto, total, quilowatts;
	
	
	printf("Digite o valor do salario minimo: ");
	scanf("%f", &salario);
	
	printf("\n Digite a quantidade de quilowatts gasta na casa: ");
	scanf("%f", &gasto);
	
	quilowatts=(salario/7/100);
	printf("\n O valor de cada quilowatts eh: %.2fR$\n",  quilowatts);
	
	total=quilowatts*gasto;
	printf("\n O valor a ser pago eh: %.2fR$\n", total);
	
	printf("\n O novo valor a ser pago com desconto de 10%% eh: %.2f R$%\n\n", total-(total*0.1));
	
	
	system("PAUSE");
	return 0;
		
}
