#include <stdio.h>
//Colocamos las diversas variables.
int main() {
	int numeros[5];
	
	//Le pedimos al usuario que ingrese los 5 n�meros.
	printf("Ingrese 5 n�meros enteros:\n");
	//Hacemos que se lean los n�meros ingresados.
	for (int i = 0; i < 5; i++) {
		printf("N�mero %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	//Imprimimos el arreglo invertido y le mostramos el resultado al usuario.
	printf("N�meros invertido:\n");
	for (int i = 4; i >= 0; i--) {
		printf("%d ", numeros[i]);
	}
	printf("\n");
	
	return 0;
}
