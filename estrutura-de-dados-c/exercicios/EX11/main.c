#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Pilha de Livros

#define TAM 5

// Tipo Livro
struct livro {
	char titulo [50];
	char autor [30];
	int codigo;
};

// Pilha
struct pilha {
	struct livro Livro [TAM];
	int inicio;
	int fim;
};

// Prototipação
void menu(int *op);
void mostrarPilha(struct pilha *pilhaLivro);
void adicionarLivro(struct pilha *pilhaLivro);
void removerLivro (struct pilha *pilhaLivro);

int main() {
	
	struct pilha pilhaLivro = {0}; // Inicialização da pilha e livros
	int op = -1;
	while (op != 0) {
		menu(&op);
		switch (op) {
			case 1: mostrarPilha(&pilhaLivro); break;
			case 2: adicionarLivro(&pilhaLivro); break;
			case 3: removerLivro (&pilhaLivro); break;
			case 0: printf ("| Encerrando programa...\n"); break;
		}
	}
	return 0;
}

// Funções
void menu(int *op) {
	do {
		printf ("\n|================ SISTEMA BIBLIOTECA ================");
		printf ("\n| 1 - Mostrar Pilha \n| 2 - Adicionar Livro \n| 3 - Desempilhar Livro \n| 0 - Sair");
		printf ("\n|====================================================");
		printf ("\n| - Informe a operacao: ");
		scanf ("%d", op);
		if (*op < 0 || *op > 3) {
			system ("cls");
			printf ("| [!] OPERACAO INVALIDA! TENTE NOVAMENTE.");
		}
	} while (*op < 0 || *op > 3);
	system ("cls");
}

void mostrarPilha(struct pilha *pilhaLivro) {
	int i;
	if (pilhaLivro->fim == pilhaLivro->inicio) {
		printf ("| [!] Nenhum livro na pilha. \n|");
	}
	else {
		printf ("\n|=================== MOSTRAR PILHA ==================");
		for (i = 0; i < pilhaLivro->fim; i++) {
			printf ("\n| - Codigo: %d", pilhaLivro->Livro[i].codigo);
			printf ("\n| - Titulo: %s", pilhaLivro->Livro[i].titulo);
			printf ("| - Autor: %s", pilhaLivro->Livro[i].autor);
			printf ("|----------------------------------------------------");
		}
		printf ("\n| QUANTIDADE DE LIVROS: %d", pilhaLivro->fim);
	}
}

void adicionarLivro(struct pilha *pilhaLivro) {
	if (pilhaLivro->fim == TAM) {
		printf ("| [!] A pilha atingiu o limite. \n|");	
	}
	else {
		int i = pilhaLivro->fim;
		printf ("\n|================== ADICIONAR LIVRO =================");
		printf ("\n| - Codigo: ");
		scanf ("%d", &pilhaLivro->Livro[i].codigo);
		fflush(stdin);
		printf ("| - Titulo: ");
		fgets (pilhaLivro->Livro[i].titulo, sizeof(pilhaLivro->Livro[i].titulo), stdin);
		printf ("| - Autor: ");
		fgets (pilhaLivro->Livro[i].autor, sizeof(pilhaLivro->Livro[i].autor), stdin);
		
		pilhaLivro->fim++;
		system ("cls");
		printf ("\n| Livro Adicionado com Sucesso!");
	}
}

void removerLivro (struct pilha *pilhaLivro) {
	if (pilhaLivro->fim == pilhaLivro->inicio) {
		printf ("| [!] Nenhum livro na pilha. \n|");
	}
	else {
		printf ("\n|=================== REMOVER LIVRO ==================");
		pilhaLivro->fim--;
		int i = pilhaLivro->fim;
		printf ("\n| Livro Removido com Sucesso! \n| - Titulo: %s|", pilhaLivro->Livro[i].titulo);
		struct livro LivroVazio = {0};
		pilhaLivro->Livro[i] = LivroVazio;
	}
}
