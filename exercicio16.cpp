#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main ()
{
	float duracao,segundo, horas, minutos, segundos;
	
	
	printf("Digite os segundos da duracao do evento: ");
	scanf("%f", &duracao);
	
	horas=floor(duracao/3600);
	segundo=duracao-(horas*3600);
	minutos=floor(segundo/60);
	segundos=floor(segundo-(minutos*60));
	
	printf("\nOs segundos digitados equivale a: %.0f horas, %.0f minutos e %.0f segundos\n\n",horas, minutos, segundos);
	
	system("PAUSE");
	return 0;
		
}
