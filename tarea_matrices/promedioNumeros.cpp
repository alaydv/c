#include <stdio.h>
	//Colocamos las diversas variables.
int main() {
	int numeros[5];
	int suma = 0;
	float promedio;
	
	//Le pedimos al usuario que ingrese los 5 n�meros.
	printf("Ingrese 5 n�meros enteros:\n");
	//Hacemos que se lean los n�meros ingresados.
	for (int i = 0; i < 5; i++) {
		printf("N�mero %d: ", i + 1);
		scanf("%d", &numeros[i]);
	//Se suman todos los n�meros escritos.
		suma += numeros[i];
	}
	
	//Se calcula el promedio de los n�meros ingresados.
	promedio = suma / 5.0;
	
	//Se le muestra el resultado al usuario.
	printf("El promedio de los 5 n�meros es: %.2f\n", promedio);
	
	return 0;
}
