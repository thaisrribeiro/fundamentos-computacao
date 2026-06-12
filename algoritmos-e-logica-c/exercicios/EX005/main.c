#include <stdio.h>
#include <stdlib.h>

// Área do Trapézio

int main() {
	
	float b1, b2, alt, area;
	
	printf ("========== AREA TRAPEZIO ==========\n");
	printf ("Informe a base 1: ");
	scanf ("%f", &b1);
	printf ("Informe a base 2: ");
	scanf ("%f", &b2);
	printf ("Informe a altura: ");
	scanf ("%f", &alt);
	
	area = ((b1 + b2) * alt) / 2;
	printf ("--------------------------------\n"); 
	printf (" - Area do Trapezio: %.2f", area);
	
	return 0;
}
