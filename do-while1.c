#include<stdio.h>
int main ()
{
	int num=0, suma=0;
	
	do
	{
		
		printf("Dar numero: ");
		scanf ("%d\n", &num);
		suma+=num;
	}
	while (num!=0);
	printf("Suma es igual a: %d\n", suma);
	
	
	return 0;
}
