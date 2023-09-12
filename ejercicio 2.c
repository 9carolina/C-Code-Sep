#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int num;
	srand (time(NULL));
	int r;
	int contador =1;

	printf("Cuantos numeros desea generar: ");	
	scanf("%d", &num);
	
	while (contador <= num)
	{
		r = rand()*2;
		r = r%100;
		printf("Numero %d: %d\n", contador, r);
		contador++;
	}
	
	
	
	return 0;
}
