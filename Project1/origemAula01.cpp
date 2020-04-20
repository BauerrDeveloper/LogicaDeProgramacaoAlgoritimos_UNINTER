#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "");
	

	int idade;
	int numero1;
	int numero2;
	int diaDaSemana;

	printf("---------EXERCÍCIO 01 - AULA PRATICA 01------------------\n");
	printf("Olá, mundo!\n\n");

	printf("---------EXERCÍCIO 02 - AULA PRATICA 01------------------\n");
	printf("Digite sua idade: ");
	scanf_s("%d", &idade);
	printf("%d?	Legal, você parece ter %d anos! \n\n", idade, idade * 2);

	printf("---------EXERCÍCIO 03 - AULA PRATICA 01------------------\n");
	printf("Digite o primeiro numero: ");
	scanf_s("%d", &numero1);
	printf("Digite o segundo numero: ");
	scanf_s("%d", &numero2);
	printf("Os números digitados foram: %d e %d \n\n",numero1, numero2);

	printf("---------EXERCÍCIO 04 - AULA PRATICA 01------------------\n");
	printf("O primeiro número acrescido de duas unidades agora é %d \n", numero1 + 2);
	printf("O segundo número acrescido de três unidades agora é %d \n\n", numero2 + 3);

	printf("---------EXERCÍCIO 05 - AULA PRATICA 01------------------\n");
	if (numero1 > numero2){
		printf("Parabéns!!! Realmente %d é maior que %d. \n\n", numero1, numero2);
	} else {
		printf("Eita porra!!! Você não sabe que %d é menor que %d??? \n\n", numero1, numero2);
	}

	printf("---------EXERCÍCIO 05 - AULA PRATICA 01------------------\n");
	printf("Digite um número de 1 a 7: ");
	scanf_s("%d", &diaDaSemana);

	switch (diaDaSemana) {
	case 1:
		printf("O dia da semana escolhido é domingo \n\n");
		break;
	case 2:
		printf("O dia da semana escolhido é segunda-feira. \n\n");
		break;
	case 3:
		printf("O dia da semana escolhido é terça-feira. \n\n");
		break;
	case 4:
		printf("O dia da semana escolhido é quarta-feira. \n\n");
		break;
	case 5:
		printf("O dia da semana escolhido é quinta-feira. \n\n");
		break;
	case 6:
		printf("O dia da semana escolhido é sexta-feira. \n\n");
		break;
	case 7:
		printf("O dia da semana escolhido é domingo. \n\n");
		break;
	default:
		printf("Não existe dia da semana para essa opção!!! \n\n");
		break;
	}
	

	system("pause");
	return 0;
}