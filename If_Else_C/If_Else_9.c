#include<stdio.h>
#include<stdlib.h>
/*Você assina um plano de 50 minutos no celular que custa R$ 50.00 por
mês, independente de utilizá-los integralmente ou não. Porém, se você
utilizar mais do que 50 minutos, é cobrado mais R$ 1.50 por cada minuto
que passar dos 50 do seu plano. Receber quantos minutos foram gastos
no mês e calcular o valor da conta.*/

int main(){
	
	float plano;
	
	printf("Seu plano fixo tem o valor de 50 reais por mes, podendo utilizar ate 50 minutos.\nDigite quantos minutos voce utilizou esse mes: ");
	scanf("%f", &plano);
	
	if (plano > 50){
		
		printf("Voce utilizou %.2f minuto(s) a mais do que o limite do plano, com isso o valor de cada minuto alem do limite sera de R$1.50", (plano - 50));
		fflush(stdin);
		printf("\nO valor a ser pago sera de: %.2f", (50 +(1.5 * (plano - 50))));
	}
	else{
		printf("Voce utilizou dentro do limite do plano, valor a ser pago: R$50.00");
	}

	
	return 0;
}