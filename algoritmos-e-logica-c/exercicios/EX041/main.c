#include <stdio.h>
#include <stdlib.h>

// Média de Alunos e Turma (ADAPTADA)

int main() { 

	const int ALUNOS = 5;
	const int QTD_NOTAS = 4;
	float notas, soma_aluno, soma_turma;
	float media_aluno [5];
	float media_turma;
	int i, j;
	
	soma_turma = 0;
	for (i = 0; i < ALUNOS; i++) {
		printf ("| ESTUDANTE %d \n", i+1);
		soma_aluno = 0;
		for (j = 0; j < QTD_NOTAS; j++) {
			printf ("| - Nota %d: ", j+1);
			scanf ("%f", &notas);
			
			while (notas > 10 || notas < 0) {
				printf ("| [!] A nota deve estar entre 0 e 10! : ");
				scanf ("%f", &notas);
			}
			
			soma_aluno += notas; 
		}
		media_aluno[i] = soma_aluno / QTD_NOTAS;
		soma_turma += media_aluno[i];
		
		printf ("|-------------------------------------\n");
		printf ("| - MEDIA: %.2f", media_aluno[i]);
		printf ("\n|-------------------------------------\n");
	}
	media_turma = soma_turma / ALUNOS;
	printf ("| - MEDIA DA TURMA: %.2f", media_turma);
	
	return 0;
}
