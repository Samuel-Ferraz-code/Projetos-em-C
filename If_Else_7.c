#include<stdio.h>
#include<stdlib.h>
/*Receber dois números e os apresente em ordem crescente. Utilize
apenas a estrutura de decisão if, ou seja, sem o opcional else.*/

int main(){
	
	float num1;
	float num2;
	
	printf("Digite um numero: \n");
	scanf("%f", &num1);
	
	fflush(stdin);
	
	printf("Digite outro numero: \n");
	scanf("%f", &num2);
	
	if (num1 > num2){
		printf("A ordem crescente dos numeros sao: %.2f , %.2f", num2,  num1);
		
	}
	if (num2 > num1){
		printf("A ordem crescente dos numeros sao: %.2f , %.2f", num1,  num2);
	}
	return 0;
}