#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main ()
{
	int Bytes,bites, MByte, kByte, Bits;
	
	
	printf("Digite o valor em Bytes: ");
	scanf("%d", &Bytes);
	
	MByte=floor(Bytes/1048576);
	bites=Bytes-(MByte*1048576);
	kByte=floor(bites/1024);
	Bits=floor(bites-(kByte*1024));
	
	
	
	printf("\n%d Bytes equivalem a: %d MBytes, %d kBytes e %d Bytes\n\n",Bytes, MByte, kByte, Bits);
	
	system("PAUSE");
	return 0;
		
}
