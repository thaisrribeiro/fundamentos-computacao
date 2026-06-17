#include <stdio.h>
#include <stdlib.h>

// Listas Dinâmicas

// Estrutura de Nó
struct no {
	int dado;
	struct no *proximo;
};

// Definindo um Ponteiro
typedef struct no *ptr_no;

// Prototipação
void menu(int *op);
void imprimir (ptr_no lista);
void adicionar (ptr_no *lista);
void remover(ptr_no *lista);
void liberar_lista(ptr_no *lista);

int main() {
	
	int op = -1;
	// Primeiro nó da lista
	ptr_no lista = NULL;
	while (op != 0) {
		menu(&op);
		system ("cls");
		switch (op) {
			case 1: imprimir(lista); break;
			case 2: adicionar(&lista); break;
			case 3: remover(&lista); break;
		}
	}
	printf ("\n| Liberando itens da memoria...");
	liberar_lista(&lista);
	printf ("\n|============================================");
	printf ("\n| Encerrando programa...	");
	return 0;
	
}

void menu(int *op) {
	
	do {
		printf ("\n|=================== MENU ===================");
		printf ("\n| 1 - Imprimir Lista \n| 2 - Adicionar Item \n| 3 - Remover Item\n| 0 - Sair");
		printf ("\n|============================================");
		printf ("\n| - Informe a operacao: ");
		scanf ("%d", op);
		system ("cls");
		if (*op < 0 || *op > 3) {
			printf ("| [!] Operacao Invalida - Tente Novamente!");
		}
	} while (*op < 0 || *op > 3);
	
}

void imprimir (ptr_no lista) {
	
	if (lista == NULL) {
		printf ("| [!] A lista esta vazia!");
	}
	else {
		printf ("|============== LISTA IMPRESSA ==============\n| ");
		while (lista != NULL) {
			printf ("%d ", lista->dado);
			lista = lista->proximo;
		}	
	}
	
}

void adicionar (ptr_no *lista) {
	
	printf ("|============== ADICIONAR ITEM ==============");
	
	ptr_no novo = (ptr_no) malloc(sizeof(struct no));
	printf ("\n| - Informe um numero: ");
	scanf ("%d", &novo->dado);
	system("cls");
	novo->proximo = NULL;
	
	if (*lista == NULL) {
		*lista = novo;
	}
	else {
		ptr_no atual = *lista;
		while (atual->proximo != NULL) {
			atual = atual->proximo;
		}
		atual->proximo = novo;
	}
	printf ("| [+] Item adicionado com sucesso!");
	
}

void remover(ptr_no *lista) {
	
	if (*lista == NULL) {
		printf ("| [!] A lista esta vazia!");
	}
	else {
		printf ("|=============== REMOVER ITEM ===============");
		printf ("\n|\n| Imprimindo lista...\n|\n");
		int dado;
		imprimir(*lista);
		printf ("\n|============================================");
		printf ("\n| - Escolha um item para remover: ");
		scanf ("%d", &dado);
		system("cls");
		
		ptr_no atual = *lista;
		ptr_no anterior = NULL;
		
		while (atual != NULL && atual->dado != dado) {
			anterior = atual;
			atual = atual->proximo;
		}
		if (atual == NULL) {
			printf ("\n| [!] Elemento nao encontrado.");
			return;
		}
		if (anterior == NULL) {
			*lista = atual->proximo;
		}
		else {
			anterior->proximo = atual->proximo;
		}
		
		free(atual);
		printf ("\n| [+] Item removido com sucesso!");
	}
}

void liberar_lista(ptr_no *lista) {
    ptr_no atual = *lista;
    ptr_no proximo_no;

    while (atual != NULL) {
        proximo_no = atual->proximo;
        free(atual);
        atual = proximo_no;
    }
    
    *lista = NULL;
    printf("\n| [+] Lista liberada com sucesso!");
}
