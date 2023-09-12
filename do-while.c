//ciclo do-while

#include <stdio.h>
int main ()
{
	int x=6, i=0;
	
	do
	{
	i=i++;
	printf("%d\n", i);
	}
	while (i<x);
	
	return 0;
}
