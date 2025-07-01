//Se definen la libreria y el total de números
#include <stdio.h>
#define total 10

//Se implementa el menú
int main () {
	//Se definen el arreglo y la suma de los números, además de la variable i
	int numeros[total];
	int sumaNumeros=0;
	int i;
	//Se le piden los datos al usuario
	printf("Ingrese los 10 números:\n");
	for (i = 0; i < total; i++) {
		printf("Nº %d:", i + 1);
		scanf("%d", &numeros[i]);
	}
	//Se calcula la suma de los números
	for (i = 0; i < total; i++) {
		sumaNumeros+= numeros[i];
	}
	//Se muestra el resultado al Usuario
	printf("La suma de los números es:\n %d", sumaNumeros);
	
	return 0;
	
}
