#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Cadastro de Livros e Impressão de suas Informações (ADAPTADA)

struct ficha {
	char titulo [50];
	char autor [50];
	char editora [30];
	int edicao;
	int ano;
};

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
	
	const int MAX = 3;
	struct ficha livros [MAX];
	int i;
	
	printf ("|---------- CADASTRO DE LIVROS ----------");
	for (i = 0; i < MAX; i++) {
		printf ("\n| LIVRO %d", i+1);
		printf ("\n| - Titulo: ");
		fgets (livros[i].titulo, 50, stdin);
		livros[i].titulo[strcspn(livros[i].titulo, "\n")] = 0;
		
		printf ("| - Autor: ");
		fgets (livros[i].autor, 50, stdin);
		livros[i].autor[strcspn(livros[i].autor, "\n")] = 0;
		
		printf ("| - Editora: ");
		fgets (livros[i].editora, 30, stdin);
		livros[i].editora[strcspn(livros[i].editora, "\n")] = 0;
		
		printf ("| - Edicao: ");
		scanf ("%d", &livros[i].edicao);
		
		while (livros[i].edicao < 1) {
			printf ("|-----------------------------------\n");
			printf ("| [!] Edicao deve ser maior que 0! \n| - Edicao: ");
			scanf ("%d", &livros[i].edicao);
		}
		limparBuffer();
		
		printf ("| - Ano: ");
		scanf ("%d", &livros[i].ano);
		while (livros[i].ano < 1) {
			printf ("|-----------------------------------\n");
			printf ("| [!] Ano deve ser maior que 0! \n| - Edicao: ");
			scanf ("%d", &livros[i].ano);
		}
		limparBuffer();
		
		printf ("|-----------------------------------");
	}
	
	printf ("\n| CADASTRO EFETUADO COM SUCESSO!");
	for (i = 0; i < MAX; i++) {
		printf ("\n|-----------------------------------");
		printf ("\n| LIVRO %d \n|", i+1);
		printf ("\n| - Titulo: %s", livros[i].titulo);
		printf ("\n| - Autor: %s", livros[i].autor);
		printf ("\n| - Editora: %s", livros[i].editora);
		printf ("\n| - Edicao: %d \n| - Ano: %d", livros[i].edicao, livros[i].ano);
	}
	
	return 0;
}
