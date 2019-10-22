#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    int i=0, dec=0, p=0,nbinario[4];

    printf("Digite um numero binario de 4 bits:"); 
    scanf("%d",&nbinario); 

    int binario = *nbinario;
    while(binario>0)
    {
        i = binario % 10;
        dec += i * (int)pow(i * 2, p++);
        binario /=  10;
    }
    printf("\nO numero binario digitado equivale ao numero ** %d ** em decimal\n\n",dec); 
    
    system("PAUSE");    
    return 0;
}
