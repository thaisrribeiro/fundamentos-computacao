#include <stdio.h>
#include <stdlib.h>

// Grafos

// Definindo Tamanho Máximo do Grafo
#define MAX 10

// Definindo uma Estrutura de Grafo
typedef struct GRAFO {
	int vertices [MAX];
	int arestas [MAX][MAX];
}GRAFO;

// Prototipação
void menu(int *op);
void definirTamanho();
void adicionar(int tamanho, GRAFO *grafo);
void remover(int tamanho, GRAFO *grafo);
void imprimir(int tamanho, GRAFO grafo);

int main() {
	
	GRAFO grafo = {0}; // Inicializando o Grafo
	int tamanho;
	definirTamanho(&tamanho); // Define o Tamanho do Grafo
	imprimir(tamanho, grafo); // Mostra o Grafo logo em Seguida da Definição de Tamanho
	int op = -1;
	while (op != 0) {
		menu(&op);
		system("cls");
		switch (op) {
			case 1: adicionar(tamanho, &grafo); break;
			case 2: remover(tamanho, &grafo); break;
			case 3: imprimir(tamanho, grafo); break;
			case 0: printf ("| Encerrando Sistema... \n"); break;
		}
	}
	
	return 0;
}

void definirTamanho(int *tamanho) {
	
	do {
		printf ("\n|============== INICIO ==============");
		printf ("\n|\n| (MAXIMO: %d)\n| - Informe a Quantidade de Vertices: ", MAX);
		scanf ("%d", tamanho);
		if (*tamanho <= 0 || *tamanho > MAX) { // Verifica se o Tamanho está Entre o Intervalo Válido
			system("cls");
			printf ("| [!] Tamanho Invalido - Tente Novamente!");
		}
	} while (*tamanho <= 0 || *tamanho > MAX); // Repete Enquanto o Tamanho for inválido
	printf("|");
}

void menu (int *op) {

	do {
		printf ("\n|=============== MENU ===============");
		printf ("\n| 1 - Adicionar Aresta \n| 2 - Remover Aresta \n| 3 - Imprimir \n| 0 - Sair");
		printf ("\n|====================================\n| - Informe a Operacao: ");
		scanf ("%d", op);
		if (*op < 0 || *op > 3) {
			system("cls");
			printf ("| [!] Operacao Invalida - Tente Novamente!");
		}
	} while (*op < 0 || *op > 3);
	
}

void adicionar(int tamanho, GRAFO *grafo) {
	
	printf ("\n|============= ADICIONAR =============");
	int n1, n2; // Recebe a Origem e Destino
	printf ("\n|\n| INTERVALO PERMITIDO: 0 - %d", tamanho-1);
	printf ("\n| - Informe o Vertice de Origem: ");
	scanf ("%d", &n1);
	
	// Verifica se Está no Intervalo Válido
	while (n1 < 0 || n1 > tamanho) {
		printf ("| [!] Valor Invalido -Tente Novamente: ");
		scanf ("%d", &n1);
	}
	
	printf ("| - Informe o Vertice de Destino: ");
	scanf ("%d", &n2);
	
	while (n2 < 0 || n2 > tamanho) {
		printf ("| [!] Valor Invalido -Tente Novamente: ");
		scanf ("%d", &n2);
	}
	
	// Adiciona a Aresta na Matriz
	grafo->arestas[n1][n2] = 1;
	grafo->arestas[n2][n1] = 1;
	printf ("| [+] Aresta Adicionada com Sucesso! \n|");
	
}

void remover(int tamanho, GRAFO *grafo) {
	
	printf ("\n|============== REMOVER ==============");
	int n1, n2;
	printf ("\n|\n| INTERVALO PERMITIDO: 0 - %d", tamanho-1);
	printf ("\n| - Informe o Vertice de Origem: ");
	scanf ("%d", &n1);
	
	while (n1 < 0 || n1 > tamanho) {
		printf ("| [!] Valor Invalido -Tente Novamente: ");
		scanf ("%d", &n1);
	}
	
	printf ("| - Informe o Vertice de Destino: ");
	scanf ("%d", &n2);
	
	while (n2 < 0 || n2 > tamanho) {
		printf ("| [!] Valor Invalido -Tente Novamente: ");
		scanf ("%d", &n2);
	}
	
	grafo->arestas[n1][n2] = 0;
	grafo->arestas[n2][n1] = 0;
	printf ("| [+] Aresta Removida com Sucesso! \n|");
	
}

void imprimir(int tamanho, GRAFO grafo) {

	printf ("\n|========== GRAFO IMPRESSO ==========");
	int i, j;
	printf ("\n|\n| VERTICES: \n|");
	for (i = 0; i < tamanho; i++) {
		printf (" [%d]", i);
	}
	
	printf ("\n|\n| ARESTAS: ");
	for (i = 0; i < tamanho; i++) {
		printf ("\n|");
		for (j = 0; j < tamanho; j++) {
			printf (" [%d]", grafo.arestas[i][j]);
		}
	}
	printf ("\n|");
	
}
