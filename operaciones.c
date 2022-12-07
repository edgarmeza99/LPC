#include<stdio.h>

int main()
{
	int numero1,numero2,suma,resta,multiplicacion,division,resto;
	
	printf("introduce el valor del primer numero: ");
	scanf("%d",&numero1);
	printf("Introduce el valor de segundo numero: ");
	scanf("%d",&numero2);
	
	suma = numero1 + numero2;
	resta = numero1-numero2;
	multiplicacion = numero1*numero2;
	division = numero1/numero2;
	resto = numero1%numero2;
	printf("suma: %d\n",suma);
	printf("resta: %d\n",resta);
	printf("mutiplicacion: %d\n",multiplicacion);
	printf("division: %d resto: %d",division,resto);
	
	
	
	return 0;
}
