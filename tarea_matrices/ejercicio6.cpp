#include <stdio.h>
#define filas 2
#define columnas 2
int main(){
int matriz[filas][columnas];
//Datos de entrada
printf("Ingrese los elementos de la matriz 2x2:\n");
for (int i=0; i< filas ; i++){
	for (int j=0; j<columnas; j++){
		printf("Elemento[%d][%d]: ",i+1, j+1);
		scanf("%d",&matriz[i][j]);
	}
}
//Salida de los datos ingresados en forma de matriz
printf("La matriz ingresada es:\n");
for(int i=0; i<filas;i++){
	for(int j=0;j<columnas;j++){
		printf("%d   ", matriz[i][j]);
	}
	printf("\n"); 
}
//Salida de los datos ingresados en forma de matriz traspuesta
printf("La matriz traspuesta es:\n");
for(int j=0; j<columnas;j++){
	for(int i=0;i<filas;i++){
		printf("%d   ", matriz[i][j]);
	}
	printf("\n"); 
}
return 0;
}
