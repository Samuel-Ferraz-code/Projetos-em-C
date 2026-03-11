#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num;
	
	printf("Digite um numero: \n");
	scanf("%i", &num);
	
	if (num >= 0){
		
		printf("\nO numero que voce digitou e positivo!\n");
		
		if (num % 2 == 0){
			
			printf("E par");
		}
		
		else{
		printf("E impar");
		}
}
	else {
	
		
		printf("O numero que voce digitou e negativo");
	}
	
	
	return 0;
}