//lista 2
//exercicio 6

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pizza 20
#define suco 2.5
#define cobertura 1.5

int main ()
{
	int qntpizza, qntsuco, qntcobertura, qntpessoas;
	float conta, servico, totconta, totpessoas;
	
	printf("Digite a quantidade de Pizzas:");
	scanf("%d",&qntpizza);
	
	printf("Digite a quantidade de Suco:");
	scanf("%d",&qntsuco);
	
	printf("Digite a quantidade de Coberturas:");
	scanf("%d",&qntcobertura);
	
	printf("Digite a quantidade de Pessoas:");
	scanf("%d",&qntpessoas);
	
	system("CLS");
	
	conta=(qntpizza*pizza)+(qntsuco*suco)+(qntcobertura*cobertura);
	servico=conta*0.1;
	totconta=conta+servico;
	totpessoas=totconta/qntpessoas;
	
	
	printf("O valor total da conta eh: **%.2fR$**\n\n",totconta);
	printf("O valor de cada pessoa eh:**%.2fR$**\n\n\n",totpessoas);

	
	printf("				*****************************\n");
	printf("				* OBRIGADO PELA PREFERENCIA *\n");
	printf("				*      VOLTE SEMPRE!!!      *\n");
	printf("				*****************************\n\n");
	
	
	
	
	
	
	system ("PAUSE");
	return 0;
		
}
