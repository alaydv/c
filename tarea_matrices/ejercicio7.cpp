//Se definen la libreria y el total de n�meros
#include <stdio.h>
#define total 5

//Se implementa el men�
int main () {
	//Se definen el arreglo y la suma de los n�meros, adem�s de la variable i,j y un temporal que permite desarrollar el m�todo burbuja  
	int numeros[total];
	int i, j, temporal;
	//Se le piden los datos al usuario
	printf("Ingrese los 5 n�meros:\n");
	for (i = 0; i < total; i++) {
		printf("N� %d:", i + 1);
		scanf("%d", &numeros[i]);
	}
	//Implementaci�n del m�todo burbuja
	for (i = 0; i < total-1; i++) {
		for (j = 0; j < total-1-i; j++) {
			if(numeros[j]>numeros[j+1]){
				temporal = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = temporal;
			}
		}
		
	}
	//Se le muestran al usuario los n�meros ordenados ascendentemente
	printf("Los n�meros ordenados del menor al mayor son:\n");
	for (i = 0; i < total; i++) {
		printf("%d \n", numeros[i]);
	}
	return 0;
}
