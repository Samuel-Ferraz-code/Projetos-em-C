//Receber dois números e mostrar o maior deles.
#include<stdio.h>
#include<stdlib.h>
int main(){

float num1;
float num2;

printf("Digite um numero: \n");
scanf("%f", &num1);
fflush(stdin);
printf("Digite outro numero: \n");
scanf("%f", &num2);

if (num1 < num2){
	
	printf("O maior numero e o: %.2f", num2);
}
if (num2 < num1){
	printf("O maior numero e o: %.2f", num1);
}
if (num2 == num1){
	printf("Os numeros sao iguais");
}
return 0;
}