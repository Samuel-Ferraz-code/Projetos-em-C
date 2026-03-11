#include<stdio.h>
#include<stdlib.h>

/*Calcular a média de um aluno em um semestre com duas provas, onde M
= (P1 + P2) / 2. Se a média for maior ou igual a 5 escreva “aprovado”,
senão calcule e mostre quanto faltou para atingir 5.*/

int main(){
	
	float p1;
	float p2;
	
	printf("Digite a nota da sua primeira prova: \n");
	scanf("%f", &p1);
	
	fflush(stdin);
	
	printf("Digite a nota da sua segunda prova: \n");
	scanf("%f", &p2);
	
	if ((p1 + p2)/2 >= 5) {
	
		printf("Voce foi aprovado(a)!");
		
	}
	else{
		printf("Voce foi reprovado(a), faltou %.2f para atingir a media.", 5 - (p1 + p2)/2);
	}
	
	
	
	return 0;
}