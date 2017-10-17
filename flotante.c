#include <stdio.h>

int main() {
	
	int num1;
	float num2;
	float num3;
	printf("Ingresa un numero entero:\n");
	scanf("%i",&num1);
	printf("Ingresa un numero con punto decimal:\n");
	scanf("%f",&num2);
	printf("Ingresa otro numero con punto decimal:\n");
	scanf("%f",&num3);
	printf("1º numero: %i\n2º numero: %f\n3º numero: %f\n",num1,num2,num3);
	if(num1==num2&&num2==num3){
		printf("los numeros son iguales");
	}else
	if(num1==num2){
		if(num2>num3){
			printf("%f es el menor",num3);
		}else
		if(num2<num3){
			printf("%i y %f son iguales y son los menores",num1,num2);
		}
	}else
	if(num1>num2){
		if(num2==num3){
			printf("%f y %f son iguales y son los menores",num2,num3);
		}else
		if(num2<num3){
			printf("%f es el menor",num2);
		}else
		if(num2>num3){
			printf("%f es el menor",num3);
		}
	}else
	if(num1<num2){
		if(num1==num3){
			printf("%i y %f son iguales y son los menores",num1,num3);
		}else
		if(num1<num3){
			printf("%i es el menor",num1);
		}
	}
	printf("\nfin del programa");
	return 0;
}

