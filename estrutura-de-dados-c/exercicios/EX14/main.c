#include <stdio.h>
#include <stdlib.h>

// Lista Dinâmica com Formato de Pilha

// Definindo tipo Nó
typedef struct NO {
	int dado;
	struct NO *proximo;
} NO;

// Definindo tipo Pilha
typedef struct PILHA {
	NO *topo;
} PILHA;

// Definindo Variável do Tipo Pilha
PILHA *p;

// Prototipação
void menu(int *op);
void empilhar();
void remover();
void imprimir();
void limparPilha();

int main() {
	
	p = (PILHA *) malloc(sizeof(PILHA)); // Alocando p em Memória
	p->topo = NULL; // Inicializando p
	int op = -1;
	while (op != 0) {
		menu(&op);
		system("cls");
		switch (op) {
			case 1: empilhar(); break;
			case 2: remover(); break;
			case 3: imprimir(); break;
			case 0: 
				limparPilha();
				printf ("\n| Encerrando sistema...\n"); 
			break;
		}
	}
	free(p);
	return 0;
	
}

void menu(int *op) {
	
	do {
		printf ("\n|=============== MENU ===============");
		printf ("\n| 1 - Empilhar Item \n| 2 - Remover Item \n| 3 - Imprimir Pilha \n| 0 - Sair");
		printf ("\n|====================================\n| - Informe a Operacao: ");
		scanf ("%d", op);
		if (*op < 0 || *op > 3) {
			system("cls");
			printf ("| [!] Operacao Invalida - Tente Novamente!");
		}
	} while (*op < 0 || *op > 3);
	
}

void empilhar() {
	
	printf ("\n|============= EMPILHAR =============");
	NO* ptr = (NO *) malloc(sizeof(NO)); // Criando um Novo Item em Memória
	printf ("\n|\n| - Informe um numero: ");
	scanf ("%d", &ptr->dado); // Insere um Dado no Item
	ptr->proximo = p->topo; // O Item Aponta para o Topo
	p->topo = ptr; // O Topo Aponta para o Item;
	printf ("| [+] Item empilhado com Sucesso! \n|");
	
}

void remover() {
	
	printf ("\n|============== REMOVER =============");
	NO* ptr = p->topo; // Cria um Ponteiro e Recebe o Topo
	int dado;
	// Verifica se há Itens na Pilha
	if (ptr == NULL) {
		printf ("\n|\n| [!] A pilha esta vazia! \n|");
	}
	else {
		p->topo = ptr->proximo; // O topo muda para outro elemento
		ptr->proximo = NULL; // O item do topo aponta para NULL
		dado = ptr->dado; 
		free(ptr); // Item liberado em memória
		printf ("\n|\n| [+] Dado '%d' removido com sucesso! \n|", dado);
	}
	
}

void imprimir() {

	printf ("\n|========== PILHA IMPRESSA ==========");
	NO* ptr = p->topo;
	if (ptr == NULL) {
		printf ("\n|\n| [!] A pilha esta vazia! \n|");
	}
	else {
		printf ("\n|\n| ");
		while (ptr != NULL) {
			printf ("[%d] ",ptr->dado);
			ptr = ptr->proximo; // Avança para o Próximo
		}
		printf ("\n| ");
	}
	
}

void limparPilha() {
	
	printf ("\n| Liberando Pilha da Memoria...");
	NO* atual = p->topo;
	NO* proximo;
	while (atual != NULL) {
		proximo = atual->proximo; // Guarda o Endereço do Próximo antes de Apagar o Atual
		free(atual); // Libera o Nó Atual
		atual = proximo; // Avança para o Próximo
	}
	p->topo = NULL; // Topo Limpo
	printf ("\n| [+] Memoria Liberada com Sucesso!");
	printf ("\n|====================================");
	
}
