#include <stdio.h>

//Función para intercambiar valores
void intercambiarValores(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int num1 = 10, num2 = 20;
	
	printf("El primer número es: %d, y el segundo número es %d\n", num1, num2);
	// Llamada a la función pasando direcciones de memoria
	intercambiarValores(&num1, &num2);
	
	printf("Después del intercambio el primer número es %d, y el segundo número es %d\n", num1, num2);
	
	return 0;
}
