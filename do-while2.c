#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r=0;
	do
	{
		r=rand() %10;
		printf("Numero: %d\n", r);
	}
	while (r !=2);
	
	return 0;
}
