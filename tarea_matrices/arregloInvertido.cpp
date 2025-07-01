#include <stdio.h>
//Colocamos las diversas variables.
int main() {
	int numeros[5];
	
	//Le pedimos al usuario que ingrese los 5 números.
	printf("Ingrese 5 números enteros:\n");
	//Hacemos que se lean los números ingresados.
	for (int i = 0; i < 5; i++) {
		printf("Número %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	//Imprimimos el arreglo invertido y le mostramos el resultado al usuario.
	printf("Números invertido:\n");
	for (int i = 4; i >= 0; i--) {
		printf("%d ", numeros[i]);
	}
	printf("\n");
	
	return 0;
}
