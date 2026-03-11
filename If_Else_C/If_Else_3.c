#include<stdio.h>
#include<stdlib.h>
/*Receber um número e verificar se ele esta na faixa de 0 à 9. Se sim,
mostre uma mensagem afirmativa, caso contrário mostre uma mensagem
indicando que o número não se encontra na faixa.*/
int main(){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	if (num >= 0 && num <= 9){
		printf("Seu numero esta entre 0 e 9");
		
	}
	else{
		printf("O numero nao esta entre a faixa de 0 a 9");
	}
	return 0;
}