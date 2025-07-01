//Se definen la libreria y el total de números
#include <stdio.h>
#define total 10

//Se implementa el menú
int main () {
	//Se definen el arreglo y la variable i
	int numeros[total];
	int sumaNumeros=0;
	int busqueda;
	int encontrado=0;
	int i;
	//Se le piden los datos al usuario
	printf("Ingrese los 10 números:\n");
	for (i = 0; i < total; i++) {
		printf("Nº %d:", i + 1);
		scanf("%d", &numeros[i]);
	}
	//Búsqueda del número
	printf("Ingrese el número a buscar:");
	scanf("%d", &busqueda);
	for (i = 0; i < total; i++) {
	if (busqueda == numeros[i]){
		printf("El número %d está en la posición: %d",busqueda, i+1);
		encontrado=1;
		break; 
	}
	}
	//Se imprime un mensaje si el número no se encuentra
	if (!encontrado) {
		printf("El número no se encuentra en el arreglo.\n");
	}
	return 0;	
}
