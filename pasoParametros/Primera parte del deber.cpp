//Algoritmo que sume dos n�meros y muestre el resultado (sin modificar las variables originales).
#include <stdio.h>
//Funci�n que suma dos n�meros
void sumaPorValor(int a, int b) {
	int resultado = a + b;
	printf("La suma es: %d\n", resultado);
}

int main() {
	//Declaraci�n de variables
	int num1, num2;
	
	printf("Ingrese el primer n�mero: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo n�mero: ");
	scanf("%d", &num2);
	
	sumaPorValor(num1, num2);
	//Mostrar el resultado sin modificar las variables originales
	printf("Valores de las variables originales: num1 = %d, num2 = %d\n", num1, num2);
	
	return 0;
}
