#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

void startmenu();
void vetoroption();
void exercicioAlgoritimos04();
	void exercicioAlgoritimos04q01();
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
	printf("\n1 - Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado.");
	printf("\n2 - Voltar");
	printf("\n3 - ");
	exercicioAlgoritimos04menuOption = toupper(getch());
	
	switch (exercicioAlgoritimos04menuOption) {
		case '1':
			system("cls");
			exercicioAlgoritimos04q01();
		break;
		case '2':
			system("cls");
			main();
		break;
		case '3':
			printf("\nlast option");
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





