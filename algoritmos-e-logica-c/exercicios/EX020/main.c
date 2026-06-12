#include <stdio.h>
#include <stdlib.h>

// Fatorial de um Número

int main() {
	
	int num, fat, i;
	
	printf (" - Informe um numero: ");
	scanf ("%d", &num);
	
	fat = 1;
	for (i = 1; i <= num; i++) {
		fat = fat * i;
	}
	
	printf ("--------------------------------\n");
	printf (" - Fatorial de %d: %d", num, fat);
	
	return 0;
}
