#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

/*avulsos*/
void contagem_regressiva(int x);
/*fim avulsos*/

void startmenu();
void vetoroption();
void exercicioAlgoritimos04();
	void exercicioAlgoritimos04q01();
	void exercicioAlgoritimos04q02();
	void exercicioAlgoritimos04q03();
void exercicioRevisaoAp2();
	void exercicioRevisaoAp2q01();
	void exercicioRevisaoAp2q02();
	void exercicioRevisaoAp2q03();
	void exercicioRevisaoAp2q04();
	
	
main() {
	
	startmenu();
	
}

void startmenu() {
	
	int startmenuOption;
	
	printf("\nSelect an option: ");
	printf("\n1 - Refresh");
	printf("\n2 - Vetores");
	printf("\n3 - Exercicios 04");
	printf("\n4 - Revisao Ap2");
	
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
		case '4':
			system("cls");
			exercicioRevisaoAp2();
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
	printf("\n0 - Voltar");
	printf("\n\n1 - Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado.");
	printf("\n\n2 - Faca um algoritmo para ler uma quantidade e a seguir ler esta quantidade de numeros. \n    Calcule a media aritmetica dos numeros lidos, a quantidade de numeros positivos, \n    a quantidade de numeros negativos e o percentual de numeros negativos e positivos. Mostre os resultados.");
	
	exercicioAlgoritimos04menuOption = toupper(getch());
	
	switch (exercicioAlgoritimos04menuOption) {
		case '0':
			system("cls");
			main();
		break;
		case '1':
			system("cls");
			exercicioAlgoritimos04q01();
		break;
		case '2':
			system("cls");
			exercicioAlgoritimos04q02();
		break;
		default:
			system("cls");
			exercicioAlgoritimos04();
	}
}

/*avulsos*/
void contagem_regressiva(int x){
	while (x >= 0) {
		printf("\n%d", x);
		x--;
	}
	printf("\n\n");
}
/*fim avulsos*/

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
		printf("Numero n. %d: ", i + 1);
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

void exercicioAlgoritimos04q03(){
	/*
		Uma loja está levantando o valor total de todas as mercadorias em estoque.
		Escreva um algoritmo que permita a entrada das seguintes informações: a) o
		número total de mercadorias no estoque; b) o valor de cada mercadoria. Ao final
		imprimir o valor total em estoque e a média de valor das mercadorias.
	*/
}

void exercicioRevisaoAp2(){

int exercicioRevisaoAp2menuOption;
	
	printf("\nSelect an option: ");
	printf("\n0 - Voltar");
	printf("\n\n1 - Q 01");
	printf("\n\n2 - Q 02");
	printf("\n\n3 - Q 03");
	printf("\n\n4 - Q 04");
	
	exercicioRevisaoAp2menuOption = toupper(getch());
	
	switch (exercicioRevisaoAp2menuOption) {
		case '0':
			system("cls");
			main();
		break;
		case '1':
			system("cls");
			exercicioRevisaoAp2q01();
		break;
		case '2':
			system("cls");
			exercicioRevisaoAp2q02();
		break;
		case '3':
			system("cls");
			exercicioRevisaoAp2q03();
		break;
		case '4':
			system("cls");
			exercicioRevisaoAp2q04();
		break;
		default:
			system("cls");
			exercicioRevisaoAp2();
	}


	
}

void exercicioRevisaoAp2q01(){
	int i, ano = 0;
	float metro_chico = 1.5, metro_ze = 1.1;
	
	printf("Ze tem %.2fm e Chico tem %.2fm no ano %d\n\n", metro_ze, metro_chico, ano);
	
	while (metro_ze < metro_chico) {
		metro_ze = metro_ze + 0.03;
		metro_chico = metro_chico + 0.02;
		ano++;
	}
	
	printf("Ze tem %.2fm e Chico tem %.2fm no ano %d\n\n", metro_ze, metro_chico, ano);
	
	system("pause");
	system("cls");
	exercicioRevisaoAp2();
	
}

void exercicioRevisaoAp2q02(){
	int i;
	float vetor[10], valor;
	
	printf("Preencha o seguinte vetor com 10 numeros reais: ");
	
	for(i = 0; i < 10; i++){
		printf("\nvetor[%d] = ", i);
		scanf("%f", &vetor[i]);
	}
	
	printf("Informe um valor: ");
	scanf("%f", &valor);
	
	for(i = 0; i < 10; i++){
		if (vetor[i] > valor) {
			printf("\n%.2f", vetor[i]);
		}
	}
	printf("\n\n");
	
	system("pause");
	system("cls");
	exercicioRevisaoAp2();
}

void exercicioRevisaoAp2q03(){
	int i, j, matriz[5][5];
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			if (i == j) {
				matriz[i][j] = 1;
			}
			else {
				matriz[i][j] = 0;
			}
		}
	}
	
	for (i = 0; i < 5; i++){
		printf("\n");
		for (j = 0; j < 5; j++){
			printf("%d ", matriz[i][j]);
		}
	}
	
	printf("\n\n");
	system("pause");
	system("cls");
	exercicioRevisaoAp2();
	
}

void exercicioRevisaoAp2q04(){
	int valor;
	printf("Digite um valor para iniciar a contagem regressiva: ");
	scanf("%d", &valor);
	
	contagem_regressiva(valor);
	
	system("pause");
	system("cls");
	exercicioRevisaoAp2();
}
