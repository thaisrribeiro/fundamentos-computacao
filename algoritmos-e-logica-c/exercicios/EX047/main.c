#include <stdio.h>
#include <stdlib.h>

// Soma e Diferença de Matrizzes (ADAPTADA)

int main() {
	
	const int MAX = 2;
	int mat1 [MAX][MAX];
	int mat2 [MAX][MAX];
	int i, j;

	printf ("| MATRIZ 1 \n");
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; j++) {
			printf ("| Elemento %d,%d: ", i+1, j+1);
			scanf ("%d", &mat1[i][j]);
		}
	}
	printf ("|------------------------------------\n");
	printf ("| MATRIZ 2 \n");
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; j++) {
			printf ("| Elemento %d,%d: ", i+1, j+1);
			scanf ("%d", &mat2[i][j]);
		}
	}
	printf ("|------------------------------------\n");
	printf ("| SOMA DAS MATRIZES");
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; j++) {
			printf ("\n| [%d,%d] = %d", i+1, j+1, mat1[i][j]+mat2[i][j]);
		}
	}
	printf ("\n|------------------------------------\n");
	printf ("| DIFERENCA DAS MATRIZES");
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; j++) {
			printf ("\n| [%d,%d] = %d", i+1, j+1, mat1[i][j]-mat2[i][j]);
		}
	}
	return 0;
}
