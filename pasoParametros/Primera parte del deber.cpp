//Algoritmo que sume dos números y muestre el resultado (sin modificar las variables originales).
#include <stdio.h>
//Función que suma dos números
void sumaPorValor(int a, int b) {
	int resultado = a + b;
	printf("La suma es: %d\n", resultado);
}

int main() {
	//Declaración de variables
	int num1, num2;
	
	printf("Ingrese el primer número: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo número: ");
	scanf("%d", &num2);
	
	sumaPorValor(num1, num2);
	//Mostrar el resultado sin modificar las variables originales
	printf("Valores de las variables originales: num1 = %d, num2 = %d\n", num1, num2);
	
	return 0;
}
