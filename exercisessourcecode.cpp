#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

void startmenu();
void vetoroption();
void exercicioAlgoritimos04();
	void exercicioAlgoritimos04q01();
	void exercicioAlgoritimos04q02();
	
main() {
	
	startmenu();
	
}

void startmenu() {
	
	int startmenuOption;
	
	printf("\nSelect an option: ");
	printf("\n1 - Refresh");
	printf("\n2 - Vetores");
	printf("\n3 - Exercicios 04");
	startmenuOption = toupper(getch());
	
	switch (startmenuOption) {
		case '1':
			system("cls");
			main();
		break;
		case '2':
			system("cls");
			vetoroption();
		break;
		case '3':
			system("cls");
			exercicioAlgoritimos04();
		break;
		default:
			system("cls");
			startmenu();
	}
}

void vetoroption() {
	int i, j, x, y;
	
	printf("Digite os valores para X e Y respectivamente: ");
	scanf("%d%d", &x, &y);
	
	int vetor[x][y];
	
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++){
			printf("Digite o valor para [%d][%d]: ", i, j);
			scanf("%d", &vetor[i][j]);
		}
	}
	
	for (i = 0; i < x; i++) {
		printf("| ");
		for (j = 0; j < y; j++) {
			printf("%d ", vetor[i][j]);
		}
		printf("|\n");
	}
	
	system("pause");
	system("cls");
	main();
}

/*
Exercícios Algoritmos 04 começa abaixo.
*/

void exercicioAlgoritimos04(){
	int exercicioAlgoritimos04menuOption;
	
	printf("\nSelect an option: ");
	printf("\n1 - Voltar");
	printf("\n\n2 - Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado.");
	printf("\n\n3 - Faca um algoritmo para ler uma quantidade e a seguir ler esta quantidade de numeros. \n    Calcule a media aritmetica dos numeros lidos, a quantidade de numeros positivos, \n    a quantidade de numeros negativos e o percentual de numeros negativos e positivos. Mostre os resultados.");
	
	exercicioAlgoritimos04menuOption = toupper(getch());
	
	switch (exercicioAlgoritimos04menuOption) {
		case '1':
			system("cls");
			main();
		break;
		case '2':
			system("cls");
			exercicioAlgoritimos04q01();
		break;
		case '3':
			system("cls");
			exercicioAlgoritimos04q02();
		break;
		default:
			system("cls");
			exercicioAlgoritimos04();
	}
}

void exercicioAlgoritimos04q01(){
	int i, valor, maior, menor;
	
	for (i = 0; i < 50; i++) {
		printf("Insira o %d valor: ", i + 1);
		scanf("%d", &valor);
		fflush(stdin);
		
		if (i == 0) {
			menor = valor;
			maior = valor;
		}
		else{
			if (valor < menor) {
				menor = valor;
			}
			if (valor > maior) {
				maior = valor;
			}
		}
	}
	
	printf("\n\nO menor valor e: %d\nO maior valor e: %d\n\n", menor, maior);
	
	system("pause");
	system("cls");
	exercicioAlgoritimos04();
}

void exercicioAlgoritimos04q02(){
	/*
	Faça um algoritmo para ler uma quantidade e a seguir ler esta quantidade de
	números. Calcule a média aritmética dos números lidos, a quantidade de
	números positivos, a quantidade de números negativos e o percentual de
	números negativos e positivos. Mostre os resultados.
	*/
	
	int i;
	float qtdNumeros, atualNumeros, somaNumeros = 0, qtdPositivos = 0, qtdNegativos = 0, perPositivos, perNegativos, mediaNumeros;
	
	printf("Digite a quantidade de numeros a ser lidos: ");
	scanf("%f", &qtdNumeros);
	
	printf("Digite os numeros: \n");
	
	for (i = 0; i < qtdNumeros; i++) {
		scanf("%f", &atualNumeros);
			
		somaNumeros += atualNumeros;
			
			if (atualNumeros > 0) {
				qtdPositivos++;
			}
			else if (atualNumeros < 0) {
				qtdNegativos++;
			}
	}
	
	mediaNumeros = somaNumeros / qtdNumeros;
	perPositivos = (qtdPositivos / qtdNumeros) * 100;
	perNegativos = (qtdNegativos / qtdNumeros) * 100;
	
	printf("\nMedia aritmetica dos numeros lidos: %.1f", mediaNumeros);
	printf("\nQuantidade de numeros positivos: %.f", qtdPositivos);
	printf("\nPercentual de numeros positivos: %.1f%%", perPositivos);
	printf("\nQuantidade de numeros negativos: %.f", qtdNegativos);
	printf("\nPercentual de numeros negativos: %.1f%%", perNegativos);
	printf("\n\n");
	
	system("pause");
	system("cls");
	exercicioAlgoritimos04();
	
}



