#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main ()
{
	int r=0;
	
	int numeroAleatorio =rand()%100;
	srand(time(NULL));

	while (numeroAleatorio)
	{
		numeroAleatorio =rand()%100;
		printf("Numero aleatorio: %d\n", numeroAleatorio);
	}
	
	return 0;
}
