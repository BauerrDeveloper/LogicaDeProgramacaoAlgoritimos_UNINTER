#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "");
	

	int idade;
	int numero1;
	int numero2;
	int diaDaSemana;

	printf("---------EXERC�CIO 01 - AULA PRATICA 01------------------\n");
	printf("Ol�, mundo!\n\n");

	printf("---------EXERC�CIO 02 - AULA PRATICA 01------------------\n");
	printf("Digite sua idade: ");
	scanf_s("%d", &idade);
	printf("%d?	Legal, voc� parece ter %d anos! \n\n", idade, idade * 2);

	printf("---------EXERC�CIO 03 - AULA PRATICA 01------------------\n");
	printf("Digite o primeiro numero: ");
	scanf_s("%d", &numero1);
	printf("Digite o segundo numero: ");
	scanf_s("%d", &numero2);
	printf("Os n�meros digitados foram: %d e %d \n\n",numero1, numero2);

	printf("---------EXERC�CIO 04 - AULA PRATICA 01------------------\n");
	printf("O primeiro n�mero acrescido de duas unidades agora � %d \n", numero1 + 2);
	printf("O segundo n�mero acrescido de tr�s unidades agora � %d \n\n", numero2 + 3);

	printf("---------EXERC�CIO 05 - AULA PRATICA 01------------------\n");
	if (numero1 > numero2){
		printf("Parab�ns!!! Realmente %d � maior que %d. \n\n", numero1, numero2);
	} else {
		printf("Eita porra!!! Voc� n�o sabe que %d � menor que %d??? \n\n", numero1, numero2);
	}

	printf("---------EXERC�CIO 05 - AULA PRATICA 01------------------\n");
	printf("Digite um n�mero de 1 a 7: ");
	scanf_s("%d", &diaDaSemana);

	switch (diaDaSemana) {
	case 1:
		printf("O dia da semana escolhido � domingo \n\n");
		break;
	case 2:
		printf("O dia da semana escolhido � segunda-feira. \n\n");
		break;
	case 3:
		printf("O dia da semana escolhido � ter�a-feira. \n\n");
		break;
	case 4:
		printf("O dia da semana escolhido � quarta-feira. \n\n");
		break;
	case 5:
		printf("O dia da semana escolhido � quinta-feira. \n\n");
		break;
	case 6:
		printf("O dia da semana escolhido � sexta-feira. \n\n");
		break;
	case 7:
		printf("O dia da semana escolhido � domingo. \n\n");
		break;
	default:
		printf("N�o existe dia da semana para essa op��o!!! \n\n");
		break;
	}
	

	system("pause");
	return 0;
}