#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "");

	float vetorExercicio1[4	];
	float vetorExercicio2[3], mediaExercicio2;
	int linha, coluna, matriz[2][2];
	int linhaExercicio4 = 0, colunaExercicio4 = 0;
	int matrizE[2][3] = {{0, 3, 6},{8, 4, 2}};
	float matrizF[2][3] = {{2.2, 1.6, 2.6},{0.4, 3.1, 6.4}};
	float resultado[2][3];
	

	printf("---------EXERCÍCIO 01 - AULA PRATICA 03------------------\n");

	vetorExercicio1[0] = 8.5;
	vetorExercicio1[1] = 7.5;
	vetorExercicio1[2] = 10;
	vetorExercicio1[3] = 10;

	printf("Nota 01: %.2f \n", vetorExercicio1[0]);
	printf("Nota 02: %.2f \n", vetorExercicio1[1]);
	printf("Nota 03: %.2f \n", vetorExercicio1[2]);
	printf("Nota 04: %.2f \n\n", vetorExercicio1[3]);



	printf("---------EXERCÍCIO 02 - AULA PRATICA 03------------------\n");
	printf("Entre com a primeira nota: ");
	scanf_s("%f", &vetorExercicio2[0]);	
	printf("Entre com a segunda nota: ");
	scanf_s("%f", &vetorExercicio2[1]);	
	printf("Entre com a terceira nota: ");
	scanf_s("%f", &vetorExercicio2[2]);
	
	mediaExercicio2 = (vetorExercicio2[0] + vetorExercicio2[1] + vetorExercicio2[2]) / 3;
	
	if (mediaExercicio2 >= 7) {
		printf("Aluno aprovado com média %.2f \n\n", mediaExercicio2);
	}
	else {
		printf("Aluno reprovado com média %.2f \n\n", mediaExercicio2);
	}



	printf("---------EXERCÍCIO 03 - AULA PRATICA 03------------------\n");
	
	for (linha = 0; linha < 2; linha++) {
		for (coluna = 0; coluna < 2; coluna++) {
			printf("Entre com o elemento [%d] [%d] da matriz: ", linha, coluna);
			scanf_s("%d", &matriz[linha][coluna]);
		}
	}
	
	printf("Imprimindo a matriz: \n");
	for (linha = 0; linha < 2; linha++) {
		for (coluna = 0; coluna < 2; coluna++) {
			printf("%.2f", matriz[linha][coluna]);
			printf("\t");
			}
		printf("\n");
		}
	printf("\n");




	printf("---------EXERCÍCIO 04 - AULA PRATICA 03------------------\n");

	printf("Exibindo a Primeira Matriz: \n");
	for (linhaExercicio4 = 0; linhaExercicio4 < 2; linhaExercicio4++) {
		for (colunaExercicio4 = 0; colunaExercicio4 < 3; colunaExercicio4++) {
			printf("%d", matrizE[linhaExercicio4][colunaExercicio4]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");

	printf("Exibindo a Segunda Matriz: \n");
	for (linhaExercicio4 = 0; linhaExercicio4 < 2; linhaExercicio4++) {
		for (colunaExercicio4 = 0; colunaExercicio4 < 3; colunaExercicio4++) {

			printf("%.2f", matrizF[linhaExercicio4][colunaExercicio4]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");


	printf("Exibindo a Soma das Matrizes: \n");
	for (linhaExercicio4 = 0; linhaExercicio4 < 2; linhaExercicio4++) {
		for (colunaExercicio4 = 0; colunaExercicio4 < 3; colunaExercicio4++) {
			resultado = { matrizE[linhaExercicio4][colunaExercicio4] + matrizF[linhaExercicio4][colunaExercicio4] };
			printf("%.2f", resultado[linhaExercicio4][colunaExercicio4]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");








	printf("---------EXERCÍCIO 05 - AULA PRATICA 03------------------\n");

	system("pause");
	return 0;
}