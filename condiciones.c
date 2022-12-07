#include<stdio.h>

int main()
{
	int edad;
	printf("Introduce tu edad: ");
	scanf("%d",&edad);
	
	if(edad >=18 && edad==20)
	{
		printf("Usted es mayor de edad y tiene 20 años ...");
	}
	else
	{
		printf("Uested es menor de edad");
	}
	
	return 0;
}

