#include <stdio.h>
#include <stdlib.h>

// Área e Perímetro de um Círculo

int main() {
	
	float raio, area, perim;
	const float PI = 3.14;
	
	printf ("Informe o raio do circulo: ");
	scanf ("%f", &raio);
	
	area = PI * (raio*raio);
	perim = 2 * PI * raio;
	
	printf ("--------------------------------\n");
	printf ("Area: %.2f | Perimetro: %.2f", area, perim);
	
	return 0;
}
