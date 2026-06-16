#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fila de Agência Bancária
#define TAM 5

struct cliente {
	char nome [50];
	char hora [9]; // HH:MM:SS
};

struct fila {
	struct cliente Cliente [TAM];
	int fim;
	int inicio;
};

// Prototipação
void menu(int *op);
void mostrarFila(struct fila *filaCliente);
void adicionarCliente(struct fila *filaCliente);
void atenderCliente(struct fila *filaCliente);

int main() {
	
	struct fila filaCliente = {0};
	int op = -1;
	while (op != 0) {
		menu(&op);
		switch (op) {
			case 1: mostrarFila(&filaCliente); break;
			case 2: adicionarCliente(&filaCliente); break;
			case 3: atenderCliente(&filaCliente); break;
			case 0: printf("| Encerrando programa...\n"); break;
		}
	}
	return 0;
	
}

void menu(int *op) {
	
	do {
		printf ("\n|================= SISTEMA DE FILA =================");
		printf ("\n| 1 - Mostrar Fila \n| 2 - Adicionar Cliente \n| 3 - Atender Cliente \n| 0 - Sair");
		printf ("\n|===================================================");
		printf ("\n| - Informe a operacao: ");
		scanf ("%d", op);
		system ("cls");
		if (*op < 0 || *op > 3) {
			printf ("|\n| [!] OPERACAO INVALIDA - TENTE NOVAMENTE.\n|");
		}
	} while (*op < 0 || *op > 3);
	
}

void mostrarFila(struct fila *filaCliente) {
	
	if (filaCliente->fim == filaCliente->inicio) {
		printf ("|\n| [!] Ninguem na fila. \n|");
	}
	else {
		printf ("|=================== MOSTRAR FILA ==================");
		int i;
		for (i = filaCliente->inicio; i < filaCliente->fim; i++) {
			printf ("\n| - Cliente: %s", filaCliente->Cliente[i].nome);
			printf ("| - Hora: %s", filaCliente->Cliente[i].hora);
			printf ("\n|---------------------------------------------------");
		}
		printf ("\n| TOTAL DE CLIENTES: %d/%d", filaCliente->fim, TAM);
	}
	
}

void adicionarCliente(struct fila *filaCliente) {
	
	if (filaCliente->fim == TAM) {
		printf ("|\n| [!] A fila chegou ao limite. \n|");
	}
	else {
		printf ("|================ ADICIONAR CLIENTE ================");
		int i = filaCliente->fim;
		fflush(stdin);
		printf ("\n|\n| - Cliente: ");
		fgets (filaCliente->Cliente[i].nome, sizeof(filaCliente->Cliente[i].nome), stdin);
		printf ("| - Hora: ");
		fgets (filaCliente->Cliente[i].hora, sizeof(filaCliente->Cliente[i].hora), stdin);
		filaCliente->fim++;
		printf ("| [+] Cliente adicionado a fila com sucesso! \n|");
	}
	
}

void atenderCliente(struct fila *filaCliente) {
	
	if (filaCliente->fim == filaCliente->inicio) {
		printf ("|\n| [!] Ninguem na fila. \n|");
	}
	else {
		printf ("|================= ATENDER CLIENTE =================");
		int i = filaCliente->inicio;
		printf ("\n|\n| [+] Cliente atendido com sucesso! - %s|", filaCliente->Cliente[i].nome);
		
		int j;
		for (j = i; j < filaCliente->fim - 1; j++) {
			filaCliente->Cliente[j] = filaCliente->Cliente[j + 1];
		}
		struct cliente clienteVazio = {0};
		filaCliente->fim--;
		filaCliente->Cliente[filaCliente->fim] = clienteVazio;
	}
	
}
