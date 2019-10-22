#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PORTUGUES 3
#define MATEMATICA 3
#define BIOLOGIA 2
#define HISTORIA 2

int main ()
{
	float por, mat, bio, his, resultado, media;
	
	printf("Digite a nota de Portugues: ");
	scanf("%f", &por);
	printf("Digite a nota de Matematica: ");
	scanf("%f", &mat);
	printf("Digite a nota de Biologia: ");
	scanf("%f", &bio);
	printf("Digite a de Historia: ");
	scanf("%f", &his);
	
	resultado=((por*PORTUGUES)+(mat*MATEMATICA)+(bio*BIOLOGIA)+(his*HISTORIA));
	media=resultado/10;
	printf("\n\nA media final da prova eh: %.2f \n\n", media);
	
	system("PAUSE");
	return 0;
		
}
