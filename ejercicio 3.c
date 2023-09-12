#include <stdlib.h>
#include <time.h>
int main()
{
	int a=3;
	int num;
	srand (time(NULL));
	int r;
	int contador =1;

	printf("Cantidad de lanzamientos: ");	
	scanf("%d", &num);
	
	while (contador <= num)
	{
		r = rand()*1;
		r = r%7;
		printf("Numero %d: %d\n", contador, r);
		contador++;
		if (r==3)
		{
		
		}
	}
	printf ("Aparece %d, %d veces", a);
	
	return 0;
}
