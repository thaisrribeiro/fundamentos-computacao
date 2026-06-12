#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Nome e Média dos Alunos e Ranking (ADAPTADA)

struct ficha {
	char nome[50];
	float notas[4];
	float media;
};

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
	
	const int ALUNOS = 3;
	const int NOTAS = 4;
	struct ficha estudante[ALUNOS];
	struct ficha temp;
	int i, j;
	float soma;
	
	for (i = 0; i < ALUNOS; i++) {
		printf ("| ESTUDANTE %d", i+1);
		printf ("\n| - Nome: ");
		fgets(estudante[i].nome, 50, stdin);
		estudante[i].nome[strcspn(estudante[i].nome, "\n")] = 0;
		soma = 0;
		for (j = 0; j < NOTAS; j++) {
			printf ("| - Nota %d: ", j+1);
			scanf ("%f", &estudante[i].notas[j]);
			
			while (estudante[i].notas[j] < 0 || estudante[i].notas[j] > 10) {
				printf ("|---------------------------------------\n");
				printf ("| [!] Nota deve estar entre 0 e 10. \n| - Nota %d: ", j+1);
				scanf ("%f", &estudante[i].notas[j]);
			}
			
			limparBuffer();
			soma += estudante[i].notas[j];
		}
		estudante[i].media = soma / NOTAS;
		printf ("|---------------------------------------\n");
		printf ("| - Media: %.2f \n", estudante[i].media);
		printf ("|---------------------------------------\n");
	}
	
	for (i = 0; i < ALUNOS-1; i++) {
		for (j = i+1; j < ALUNOS; j++) {
			if (estudante[i].media < estudante[j].media) {
				temp = estudante[i];
				estudante[i] = estudante[j];
				estudante[j] = temp;
			}
		}
	}
	
	printf ("| RANKING DE MEDIAS");
	for (i = 0; i < ALUNOS; i++) {
		printf ("\n| %d - %s : %.2f", i+1, estudante[i].nome, estudante[i].media);
	}
	
	return 0;
}
