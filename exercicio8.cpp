#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

int main()
{
	float angulo, seno, cosseno, tangente, cotangente, secante, cosecante;
	
	printf("digite o valor do angulo:");
	scanf ("%f",&angulo);

	seno=sin(angulo*PI/180);
	printf("\nO valor do seno eh: **%.2f**\n",seno);

	cosseno=cos(angulo*PI/180);
	printf("\nO valor do cosseno eh: **%.2f**\n",cosseno);

	tangente=tan(angulo*PI/180);
	printf("\nO valor do tangente eh: **%.2f**\n",tangente);

	cotangente=1/tan(angulo*PI/180);
	printf("\nO valor do cotangente eh: **%.2f**\n",cotangente);

	secante=1/cos(angulo*PI/180);
	printf("\nO valor do secante eh: **%.2f**\n",secante);
	
	cosecante=1/sin(angulo*PI/180);
	printf("\nO valor do cosecante eh: **%.2f**\n\n",cosecante);

	system("PAUSE");
	return 0;

}
