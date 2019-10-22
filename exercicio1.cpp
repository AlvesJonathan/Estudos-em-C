#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	int w, x, y, z;
	
	printf(" Digite o primeiro numero:");
	scanf("%d",&w);
	
	printf(" Digite o segundo numero:");
	scanf("%d",&x);
	
	printf(" Digite o terceiro numero:");
	scanf("%d",&y);
	
	z=(w+x+y)/3;
	
	printf(" \n A media dos numeros digitados eh: ** %d **\n\n",z);
	
	system ("PAUSE");
	return 0;
	
	
}
