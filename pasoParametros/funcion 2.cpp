#include <stdio.h>

//Funci�n para intercambiar valores
void intercambiarValores(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int num1 = 10, num2 = 20;
	
	printf("El primer n�mero es: %d, y el segundo n�mero es %d\n", num1, num2);
	// Llamada a la funci�n pasando direcciones de memoria
	intercambiarValores(&num1, &num2);
	
	printf("Despu�s del intercambio el primer n�mero es %d, y el segundo n�mero es %d\n", num1, num2);
	
	return 0;
}
