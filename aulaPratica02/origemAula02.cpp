#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");

	float nota1, nota2, media, numero1, numero2, outroNumero;
	int qtdeRepeticoes, count = 1, outroContador;
	


	printf("---------EXERCÍCIO 01 - AULA PRATICA 02------------------\n");
	printf("Entre com a primeira nota: ");
	scanf_s("%f", &nota1);
	printf("Entre com a segunda nota: ");
	scanf_s("%f", &nota2);

	media = (nota1 + nota2) / 2;

	if (media >= 7) {
		printf("Parabéns! Você foi aprovado com média %.2f!!!\n\n", media);
	} else {
		printf("Sua média foi %.2f!!! Infelizmente você foi reprovado.\n\n\n", media);
	}
	printf("\n");

	printf("---------EXERCÍCIO 02 - AULA PRATICA 02------------------\n");
	printf("Usando While\n");
	printf("Digite a quantidade de repetições: ");
	scanf_s("%d", &qtdeRepeticoes);

	while (count <= qtdeRepeticoes)
	{
		printf("Essa foi a %d repetição do laço.\n", count);
		count++;
	}

	printf("Usando o FOR\n");
	for (count = 1; count <= qtdeRepeticoes; count++) {
		printf("Essa foi a %d repetição do laço! \n", count);
	}
	printf("\n");
	printf("\n");


	printf("---------EXERCÍCIO 03 - AULA PRATICA 02------------------\n");
	printf("Digite o primeirio número: ");
	scanf_s("%f", &numero1);
	printf("Digite o segundo número: ");
	scanf_s("%f", &numero2);

	printf(">>>RESULTADOS: \n");
	printf("Adição: %.2f \n", numero1 + numero2);
	printf("Subtração: %.2f \n", numero1 - numero2);
	printf("Multiplicação: %.2f \n", numero1 * numero2);
	printf("Divisão: %.2f \n\n", numero1 / numero2);
	printf("\n");

	printf("---------EXERCÍCIO 04 - AULA PRATICA 02------------------\n");
	printf("Exibindo números de 1 até 30 de 3 em 3:\n");

	for (outroContador = 1; outroContador < 30; outroContador += 3) {
		printf("%d \n", outroContador);
		
	}
	printf("\n\n");



	printf("---------EXERCÍCIO 05 - AULA PRATICA 02------------------\n");
	printf("Exibindo números de 30 até 1:\n");
	for (outroContador = 30; outroContador >= 1; outroContador--) {
		printf("%d \n", outroContador);

	}
	printf("\n\n");


	system("pause");
	return 0;
}