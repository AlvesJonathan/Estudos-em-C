#include<stdio.h> 
#include<stdlib.h> 


int main()
{ 

	float numreal, frac; 
	printf("Digite um numero real: "); 
	scanf("%f",&numreal);
	
	frac= numreal-(int)numreal;
	
	
	printf("\nA parte inteira deste numero eh: %d\n",(int)numreal); 
	printf("A parte fracionaria deste numero eh: %.2f\n",frac); 
	printf("O arredondamento deste numero eh: %.0f\n\n",numreal);
	
	system("pause"); 
	return 0; 
}
