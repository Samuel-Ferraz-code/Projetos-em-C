#include<stdio.h>
#include<stdlib.h>
/*Receber numerador e denominador. Calcular e mostrar o resultado da
divisão, desde que possível (denominador diferente de zero). Se não for
possível dividir, apenas escreva “não existe divisão por zero”.*/
int main(){
	
	float den;
	float num;
	
	printf("Digite o seu numerador: \n");
	scanf("%f", &num);
	printf("Digite o seu denominador: \n");
	scanf("%f", &den);
	
	if (den != 0){
		printf("A sua divisao resulta em: %2.f", num / den);
	
	}
	else{
		printf("A sua divisao e impossivel de ser calculada, por conta do denominador ser 0");
	}
	
	
	
	return 0;
}