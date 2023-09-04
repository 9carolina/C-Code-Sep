/// hacer un programa que pida que haga un arbolito de 3,5 o 7 niveles)
//condiciones de 3 estados logicos: módulo, división,...
//NIVELES dependiendo de la condicion que se ponga, se imprime uno de 3,5,7 niv)
///imprimir un árbol de los niveles

#include <stdio.h>
#include <math.h>

int main()
{
	int a=1;
	while (a==1)
	{
		int a;
		printf("Elija un numero, ya sea 3, 5, 7, -3, -5, -7, para determinar los niveles de su arbolito: ");
		scanf ("%d", &a);
		
		switch(a)
		{
			case 3:
				printf("\n  *\n ***\n*****\n  |\n\n");
				break;
				
			case 5:
				printf("\n    *\n   ***\n  *****\n *******\n*********\n    |\n\n");
				break;
				
			case 7:
				printf("\n      *\n     ***\n    *****\n   *******\n  *********\n ***********\n*************\n       |\n\n");
				break;
				
			case -3:
				printf("\n  |\n*****\n ***\n  *\n\n");
				break;
			
			case -5:
				printf("\n    |\n*********\n *******\n  *****\n   ***\n    *\n\n");
				break;
				
			case -7:
				printf("\n      |\n*************\n ***********\n  *********\n   *******\n    *****\n     ***\n      *\n\n");
				break;
			
			default:
				printf("Opcion no valida\n");
				break;
		}
		
	}
	
	
	return 0;
}
