#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");

	float nota1, nota2, media, numero1, numero2, outroNumero;
	int qtdeRepeticoes, count = 1, outroContador;
	


	printf("---------EXERC�CIO 01 - AULA PRATICA 02------------------\n");
	printf("Entre com a primeira nota: ");
	scanf_s("%f", &nota1);
	printf("Entre com a segunda nota: ");
	scanf_s("%f", &nota2);

	media = (nota1 + nota2) / 2;

	if (media >= 7) {
		printf("Parab�ns! Voc� foi aprovado com m�dia %.2f!!!\n\n", media);
	} else {
		printf("Sua m�dia foi %.2f!!! Infelizmente voc� foi reprovado.\n\n\n", media);
	}
	printf("\n");

	printf("---------EXERC�CIO 02 - AULA PRATICA 02------------------\n");
	printf("Usando While\n");
	printf("Digite a quantidade de repeti��es: ");
	scanf_s("%d", &qtdeRepeticoes);

	while (count <= qtdeRepeticoes)
	{
		printf("Essa foi a %d repeti��o do la�o.\n", count);
		count++;
	}

	printf("Usando o FOR\n");
	for (count = 1; count <= qtdeRepeticoes; count++) {
		printf("Essa foi a %d repeti��o do la�o! \n", count);
	}
	printf("\n");
	printf("\n");


	printf("---------EXERC�CIO 03 - AULA PRATICA 02------------------\n");
	printf("Digite o primeirio n�mero: ");
	scanf_s("%f", &numero1);
	printf("Digite o segundo n�mero: ");
	scanf_s("%f", &numero2);

	printf(">>>RESULTADOS: \n");
	printf("Adi��o: %.2f \n", numero1 + numero2);
	printf("Subtra��o: %.2f \n", numero1 - numero2);
	printf("Multiplica��o: %.2f \n", numero1 * numero2);
	printf("Divis�o: %.2f \n\n", numero1 / numero2);
	printf("\n");

	printf("---------EXERC�CIO 04 - AULA PRATICA 02------------------\n");
	printf("Exibindo n�meros de 1 at� 30 de 3 em 3:\n");

	for (outroContador = 1; outroContador < 30; outroContador += 3) {
		printf("%d \n", outroContador);
		
	}
	printf("\n\n");



	printf("---------EXERC�CIO 05 - AULA PRATICA 02------------------\n");
	printf("Exibindo n�meros de 30 at� 1:\n");
	for (outroContador = 30; outroContador >= 1; outroContador--) {
		printf("%d \n", outroContador);

	}
	printf("\n\n");


	system("pause");
	return 0;
}