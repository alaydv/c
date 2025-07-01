#include <stdio.h>
	//Colocamos las diversas variables.
int main() {
	int numeros[5];
	int suma = 0;
	float promedio;
	
	//Le pedimos al usuario que ingrese los 5 números.
	printf("Ingrese 5 números enteros:\n");
	//Hacemos que se lean los números ingresados.
	for (int i = 0; i < 5; i++) {
		printf("Número %d: ", i + 1);
		scanf("%d", &numeros[i]);
	//Se suman todos los números escritos.
		suma += numeros[i];
	}
	
	//Se calcula el promedio de los números ingresados.
	promedio = suma / 5.0;
	
	//Se le muestra el resultado al usuario.
	printf("El promedio de los 5 números es: %.2f\n", promedio);
	
	return 0;
}
