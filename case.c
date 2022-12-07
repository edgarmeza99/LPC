#include<stdio.h>

int main()
{
	int num1,num2,opc,suma,resta,multiplicacion,division;
	
	printf("Numero 1: ");
	scanf("%d",&num1);
	printf("Numero 2: ");
	scanf("%d",&num2);
	
	printf("1) Suma \n2) Resta \n3) Mutiplicacion \n4) Division \n");
	scanf("%d",&opc);
	
	switch(opc)
	{
		case 1: 
			suma = num1+num2;
			printf("La suma es : %d",suma);
			break;
		case 2: 
			resta = num1-num2;
			printf("La resta es : %d",resta);
			break;
		case 3: 
			multiplicacion = num1*num2;
			printf("La mutipicacion es : %d",multiplicacion);
			break;
		case 4: 
			division = num1/num2;
			printf("La division es : %d",division);
			break;								
	}
	
	return 0;
}
