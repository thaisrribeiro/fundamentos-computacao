#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Agenda de Contatos (ADAPTADA)

struct cadastro {
	char nome [50];
	char telefone [15];
	char email [256];
};

int main() {
	
	const int MAX = 3;
	struct cadastro contato [MAX];
	int i;
	
	printf ("|---------- CADASTRO DE CONTATOS ----------\n");
	for (i = 0; i < MAX; i++) {
		printf ("| CONTATO %d", i+1);
		printf ("\n| - Nome: ");
		fgets (contato[i].nome, 50, stdin);
		contato[i].nome [strcspn(contato[i].nome, "\n")] = 0;
		
		printf ("| - Telefone: ");
		fgets (contato[i].telefone, 15, stdin);
		contato[i].telefone [strcspn(contato[i].telefone, "\n")] = 0;
		
		printf ("| - E-Mail: ");
		fgets (contato[i].email, 256, stdin);
		contato[i].email [strcspn(contato[i].email, "\n")] = 0;
		printf ("|----------------------------------------\n");
	}
	#ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
	printf ("| CONTATOS CADASTRADOS COM SUCESSO!");
	for (i = 0; i < MAX; i++) {
		printf ("\n|----------------------------------------");	
		printf ("\n| CONTATO %d", i+1);	
		printf ("\n| - Nome: %s", contato[i].nome);
		printf ("\n| - Telefone: %s", contato[i].telefone);
		printf ("\n| - E-Mail: %s", contato[i].email);		
	}
	return 0;
}
