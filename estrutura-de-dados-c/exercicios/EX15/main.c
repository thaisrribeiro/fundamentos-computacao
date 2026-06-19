#include <stdio.h>
#include <stdlib.h>

// Lista Dinâmica em Formato de Fila

// Definindo Estrutura de Nó
typedef struct NO {
	int dado;
	struct NO *proximo;
} NO;

// Definindo Estrutura de Fila
typedef struct FILA {
	NO* inicio;
	NO* fim;
} FILA;

// Definindo Variável do Tipo Fila
FILA *f;

void menu(int *op);
void adicionar();
void remover();
void imprimir();
void limparFila();

int main() {
	
	f = (FILA *) malloc(sizeof(FILA));
	f->fim = NULL;
	f->inicio = NULL;
	int op = -1;
	while (op != 0) {
		menu(&op);
		system("cls");
		switch (op) {
			case 1: adicionar(); break;
			case 2: remover(); break;
			case 3: imprimir(); break;
			case 0:
				limparFila();
				free(f);
				printf ("\n| Encerrando Sistema...\n");
			break;
		}
	}
	
	return 0;
}

void menu(int *op) {
	
	do {
		printf ("\n|=============== MENU ===============");
		printf ("\n| 1 - Adicionar Item \n| 2 - Remover Item \n| 3 - Imprimir Fila \n| 0 - Sair");
		printf ("\n|====================================\n| - Informe a Operacao: ");
		scanf ("%d", op);
		if (*op < 0 || *op > 3) {
			system("cls");
			printf ("| [!] Operacao Invalida - Tente Novamente!");
		}
	} while (*op < 0 || *op > 3);
	
}

void adicionar() {
	
	printf ("\n|============= ADICIONAR =============");
	NO* ptr = (NO *) malloc(sizeof(NO)); // Aloca um Novo Item na Memória
	printf ("\n|\n| - Informe um numero: ");
	scanf ("%d", &ptr->dado);
	ptr->proximo = NULL;
	// Verifica se a Fila está Vazia
	if (f->inicio == NULL) {
		f->inicio = ptr; // Está vazia? Então, o Início vai ser esse Novo Item
	}
	else {
		f->fim->proximo = ptr; // O endereço do item anterior aponta para o novo item
	}
	f->fim = ptr; // O fim aponta para o novo item
	printf ("| [+] Item Adicionado com Sucesso! \n|");
	
}

void remover() {
	
	printf ("\n|============== REMOVER =============");
	NO* ptr = f->inicio;
	int dado;
	if (ptr == NULL) {
		printf ("\n|\n| [!] A fila esta vazia! \n|");
	}
	else {
		f->inicio = ptr->proximo; // O início passa para o próximo item
		ptr->proximo = NULL; // O item deixa de referenciar o item que será removido
		dado = ptr->dado;
		free(ptr); // O item é liberado
		
		if (f->inicio == NULL) {
			f->fim = NULL;
		}
		
		printf ("\n|\n| [+] Dado '%d' Removido com Sucesso! \n|", dado);
	}
	
}

void imprimir() {
	
	printf ("\n|=========== FILA IMPRESSA ===========");
	NO* ptr = f->inicio;
	if (ptr == NULL) {
		printf ("\n|\n| [!] A fila esta vazia! \n|");
	}
	else {
		printf ("\n|\n| ");
		while (ptr != NULL) {
			printf ("[%d] ", ptr->dado);
			ptr = ptr->proximo; // Avança para o Próximo
		}
		printf ("\n|");
	}
	
}

void limparFila() {
	
	printf ("| Liberando Fila da Memoria...");
	NO* atual = f->inicio; // Variável recebe o Início
	NO* proximo;
	while (atual != NULL) {
		proximo = atual->proximo;
		free(atual); // O item anterior é removido
		atual = proximo;
	}
	f->fim = NULL;
	f->inicio = NULL;
	printf ("\n| [+] Memoria Liberada com Sucesso!");
	printf ("\n|====================================");
	
}
