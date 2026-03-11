#include<stdio.h>
#include<stdlib.h>
/*Implemente um programa que calcule aumento de salário no ano
corrente. Se o salário for de até R$ 1000.00 deve ser calculado o novo
salário com aumento de 5%, para um salário maior que R$ 1000.00 o
aumento é de 7%*/

int main(){
	
	float salario1;
	
	printf("Digite o seu salario atual (em reais): \n");
	scanf("%f", &salario1);
	
	if (salario1 <= 1000){
		printf("Parabens!\nVoce recebeu um aumento de 5%%, seu novo salario sera de: %.2f reais", (salario1 * 1.05));
	}
	else{
		printf("Parabens!\nVoce recebeu um aumento de 7%%, seu novo salario sera de: %.2f reais", (salario1 * 1.07));
	}
	return 0;
}