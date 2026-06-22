#include <stdio.h>
#include <stdlib.h>

// Mais prática com Listas Dinâmicas

// Definindo Estrutura de Nó
typedef struct NO {
	int dado;
	struct NO *proximo;
} NO;

// Definindo Variável Nó
NO *lista = NULL;

void menu(int *op);
void adicionar();
void remover();
void imprimir();
void limpar();

int main() {
	
	int op = -1;
	while (op != 0) {
		menu(&op);
		system("cls");
		switch (op) {
			case 1: adicionar(); break;
			case 2: remover(); break;
			case 3: imprimir(); break;
			case 0:
				limpar(); // Limpa todos os Itens antes de Encerrar o Sistema
				printf ("\n| Encerrando Sistema...\n");
			break;
		}
	}
	
	return 0;
}

void menu (int *op) {

	do {
		printf ("\n|=============== MENU ===============");
		printf ("\n| 1 - Adicionar Item \n| 2 - Remover Item \n| 3 - Imprimir Lista \n| 0 - Sair");
		printf ("\n|====================================\n| - Informe a Operacao: ");
		scanf ("%d", op);
		if (*op < 0 || *op > 3) {
			system("cls");
			printf ("| [!] Operacao Invalida - Tente Novamente!");
		}
	} while (*op < 0 || *op > 3);
	
}

void adicionar() {
	
	printf ("|========== ADICIONAR ITEM ==========");
	NO* item = (NO *) malloc(sizeof(NO)); // Aloca novo Item em Memória
	printf ("\n|\n| - Informe um numero: ");
	scanf ("%d", &item->dado);
	item->proximo = NULL;
	
	// Verifica se a Lista está Vazia
	if (lista == NULL) {
		lista = item; // A lista recebe o Primeiro Item
	}
	else {
		NO* atual = lista; // Um Ponteiro Atual é Criado
		// Enquanto o Item Apontar para Outro Item...
		while (atual->proximo != NULL) {
			atual = atual->proximo; // Ponteiro Atual Passa para o Próximo Item
		}
		atual->proximo = item; // O item é Inserido no Final da Lista 
	}
	printf ("| [+] Item Adicionado com Sucesso! \n|");
	
}

void remover() {
	
	printf ("|=========== REMOVER ITEM ===========");
	// Verifica se a Lista está Vazia
	if (lista == NULL) {
        printf("\n|\n| [!] A Lista esta Vazia! \n|");
    }
	else {
		int dado;
		printf ("\n|\n| - Item a ser Removido: ");
		scanf ("%d", &dado);
		NO* atual = lista; // Começa a Busca pelo Início da Lista
		NO* anterior = NULL; // Nó anterior ao Atual, começando como NULL
		// Enquanto o Atual não Chegou ao Fim E se o Dado for Diferente do Dado do Item...
		while (atual != NULL && dado != atual->dado) {
			anterior = atual; // O Ponteiro Anterior Passa a ser o Atual
			atual = atual->proximo; // O Atual avança para o Próximo Item
		}
		// Se o atual é NULL, toda a Lista foi Varrida e o Dado não foi Encontrado
		if (atual == NULL) {
			printf ("| [!] Item nao Encontrado! \n|");
			return;
		}
		// Se o Item a ser Removido é o Primeiro da Lista...
		if (anterior == NULL) {
			lista = atual->proximo; // O Início da Lista passa a ser o Próximo Item
		}
		else {
			anterior->proximo = atual->proximo; // O Item anterior Aponta para o Item Posterior ao Atual
		}
		free(atual);
		printf ("| [+] Item Removido com Sucesso! \n|");
	}
}

void imprimir() {
	
	printf ("|========== LISTA IMPRESSA ==========");
	NO* ptr = lista;
	// Verifica se a Lista está Vazia
	if (lista == NULL) {
		printf("\n|\n| [!] A Lista esta Vazia! \n|");
	}
	else {
		printf ("\n|\n| ");
		// Enquanto o Ponteiro não apontar para um Item Vazio...
		while (ptr != NULL) {
			printf ("[%d] ", ptr->dado);
			ptr = ptr->proximo; // Ponteiro Avança para o Próximo Item
		}
		printf("\n| ");
	}
	
}

void limpar() {
	
	if (lista != NULL) {
		printf("| Liberando Itens da Memória...");
		NO* atual = lista; // Atual recebe o Início da Lista
		NO* proximo;
		// Enquanto o item não for NULL...
		while (atual != NULL) {
			proximo = atual->proximo; // O próximo item recebe o endereço Apontado pelo Atual
			free(atual); // Libera o Item Atual
			atual = proximo; // O Atual Avança para o Próximo Item
		}
		printf("\n| [+] Lista liberada com sucesso!");
	}
	
}
