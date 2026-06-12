#include <stdio.h>
#include <stdlib.h>

// Cadastro de Livros, Pesquisa e Ordenação (ADAPTADO)

struct ficha {
	int codigo;
	int ano;
	char titulo[50];
	char autor [30];
	char area [30];
	char editora [30];
};

int main() {
	
	const int MAX = 5;
	struct ficha livro [MAX];
	struct ficha temp;
	int qtd_livros = 0;
	int i = 0;
	int j;
	int menu = 0;
	int cod, busca;
	
	while (menu != 5) {
		printf ("| 1 - Cadastrar Livros \n| 2 - Imprimir Informacoes \n| 3 - Pesquisar Livros \n| 4 - Ordenar por Ano \n| 5 - Encerrar Programa\n");
		printf ("|---------------------------------\n| Selecione uma operacao: ");
		scanf ("%d", &menu);
	
		while (menu < 1 || menu > 5) {
			printf ("| [!] Operacao Invalida - Tente Novamente: ");
			scanf ("%d", &menu);
		}
	
		if (menu == 5) {
			printf ("|---------------------------------\n| Encerrando Programa...");
		}
		else {
			switch (menu) {
				case 1: // Cadastrar Livros
					if (qtd_livros == MAX) {
						printf ("|---------------------------------\n| [!] Maximo de Livros Atingidos!\n|---------------------------------\n");
					}
					else {
						i = qtd_livros;
						qtd_livros++;
						printf ("|---------------------------------\n| LIVRO %d\n", qtd_livros);
						printf ("| Codigo: ");
						scanf ("%d", &livro[i].codigo);
						while (getchar() != '\n');
						printf ("| Titulo: ");
						scanf(" %49[^\n]", livro[i].titulo);
						printf ("| Autor: ");
						scanf(" %29[^\n]", livro[i].autor);
						printf ("| Area: ");
						scanf(" %29[^\n]", livro[i].area);
						printf ("| Editora: ");
						scanf(" %29[^\n]", livro[i].editora);
						printf ("| Ano: ");
						scanf ("%d", &livro[i].ano);
						
						while (livro[i].ano < 1) {
							printf ("| [!] Ano Deve Ser Positivo! : ");
							scanf ("%d", &livro[i].ano);
						}
						printf ("|---------------------------------\n| CADASTRO REALIZADO!\n|---------------------------------\n");
					}
				break;
				case 2: // Imprimir Informações
					if (qtd_livros < 1) {
						printf ("|---------------------------------\n| [!] NENHUM LIVRO CADASTRADO!\n|---------------------------------\n");
					}
					else {
						printf ("|---------------------------------\n| LIVROS CADASTRADOS: \n|\n");
						
						for (i = 0; i < qtd_livros; i++) {
							printf ("| LIVRO %d\n", i+1);
							printf ("| - Codigo: %d\n", livro[i].codigo);
							printf ("| - Ano: %d \n", livro[i].ano);
							printf ("| - Titulo: %s \n", livro[i].titulo);
							printf ("| - Autor: %s \n", livro[i].autor);
							printf ("| - Area: %s \n", livro[i].area);
							printf ("| - Editora: %s \n", livro[i].editora);
							printf ("|---------------------------------\n");
						}
					}
				break;
				case 3: // Pesquisar Livros
					if (qtd_livros < 1) {
						printf ("|---------------------------------\n| [!] NENHUM LIVRO CADASTRADO!\n|---------------------------------\n");
					}
					else {
						printf ("|---------------------------------\n| PESQUISAR LIVRO \n");
						printf ("| Codigo: ");
						scanf ("%d", &cod);
					
						i = busca = 0;
						while (i < qtd_livros && busca == 0) {
							if (livro[i].codigo == cod) {
								busca = 1;
							}
							else {
								i++;
							}
						}
					
						if (busca == 1) {
							printf ("|---------------------------------\n");
							printf ("| Codigo: %d \n| Titulo: %s \n| Autor: %s \n| Area: %s \n| Ano: %d \n| Editora: %s\n", 
							livro[i].codigo, livro[i].titulo, livro[i].autor, livro[i].area, livro[i].ano, livro[i].editora);
							printf ("|---------------------------------\n| LIVRO ENCONTRADO!\n|---------------------------------\n");
						}
						else {
							printf ("|---------------------------------\n| [!] NENHUM LIVRO ENCONTRADO \n|---------------------------------\n");
						}
					}						
				break;
				case 4: // Ordenar por Ano
					if (qtd_livros < 1) {
						printf ("|---------------------------------\n| [!] NENHUM LIVRO CADASTRADO!\n|---------------------------------\n");
					}
					else {
						for (i = 0; i < qtd_livros; i++) {
							for (j = i+1; j < qtd_livros; j++) {
								if (livro[i].ano > livro[j].ano) {
									temp = livro[i];
									livro[i] = livro[j];
									livro[j] = temp;
								}
							}
						}
						printf ("|---------------------------------\n| LIVROS ORDENADOS! \n|\n");
						for (i = 0; i < qtd_livros; i++) {
							printf ("| LIVRO %d\n", i+1);
							printf ("| -  Codigo: %d\n", livro[i].codigo);
							printf ("| - Ano: %d \n", livro[i].ano);
							printf ("| - Titulo: %s \n", livro[i].titulo);
							printf ("| - Autor: %s \n", livro[i].autor);
							printf ("| - Area: %s \n", livro[i].area);
							printf ("| - Editora: %s \n", livro[i].editora);
							printf ("|---------------------------------\n");
						}
					}
				break;						
			}
		}	
	}	
	return 0;
}
