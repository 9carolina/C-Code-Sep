/*Genera un número específico de números aleatorios y calcularás su suma. 
Puedes ajustar la variable numNumerosAleatorios para cambiar la cantidad de números aleatorios que deseas sumar
*/
 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 
 int main ()
 {
	
	int num;
	int numeroAleatorio =rand()%100;
	srand(time(NULL));
	
	printf("Cantidad de numeros que deseas sumar: \n");
	scanf("%d", &num);
	
	int d=0;
	int suma=0;
	while (d<num)
	{
		numeroAleatorio =rand()%51;
		printf("Numero aleatorio: %d\n", numeroAleatorio);
		suma=suma+numeroAleatorio;
		d++;
	}
 	
	 printf("La suma de los numeros aleatorios es: %d\n", suma);
	  	
 	return 0;
 }
