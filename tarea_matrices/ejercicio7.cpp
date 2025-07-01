//Se definen la libreria y el total de números
#include <stdio.h>
#define total 5

//Se implementa el menú
int main () {
	//Se definen el arreglo y la suma de los números, además de la variable i,j y un temporal que permite desarrollar el método burbuja  
	int numeros[total];
	int i, j, temporal;
	//Se le piden los datos al usuario
	printf("Ingrese los 5 números:\n");
	for (i = 0; i < total; i++) {
		printf("Nº %d:", i + 1);
		scanf("%d", &numeros[i]);
	}
	//Implementación del método burbuja
	for (i = 0; i < total-1; i++) {
		for (j = 0; j < total-1-i; j++) {
			if(numeros[j]>numeros[j+1]){
				temporal = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = temporal;
			}
		}
		
	}
	//Se le muestran al usuario los números ordenados ascendentemente
	printf("Los números ordenados del menor al mayor son:\n");
	for (i = 0; i < total; i++) {
		printf("%d \n", numeros[i]);
	}
	return 0;
}
