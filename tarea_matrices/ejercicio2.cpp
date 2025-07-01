//Se definen la libreria y el total de n�meros
#include <stdio.h>
#define total 10

//Se implementa el men�
int main () {
	//Se definen el arreglo y la variable i
	int numeros[total];
	int sumaNumeros=0;
	int busqueda;
	int encontrado=0;
	int i;
	//Se le piden los datos al usuario
	printf("Ingrese los 10 n�meros:\n");
	for (i = 0; i < total; i++) {
		printf("N� %d:", i + 1);
		scanf("%d", &numeros[i]);
	}
	//B�squeda del n�mero
	printf("Ingrese el n�mero a buscar:");
	scanf("%d", &busqueda);
	for (i = 0; i < total; i++) {
	if (busqueda == numeros[i]){
		printf("El n�mero %d est� en la posici�n: %d",busqueda, i+1);
		encontrado=1;
		break; 
	}
	}
	//Se imprime un mensaje si el n�mero no se encuentra
	if (!encontrado) {
		printf("El n�mero no se encuentra en el arreglo.\n");
	}
	return 0;	
}
