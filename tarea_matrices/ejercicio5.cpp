#include <stdio.h>
#define NUMEROS 10
int main(){
	int arreglo[NUMEROS];
	int contador=0;
	for (int i=0;i<NUMEROS;i++){
		printf("Ingrese el número %d:\n",i+1);
	    scanf("%d",&arreglo[i]);
	if (arreglo[i]<0){
		contador++;
	}
	}
	printf("Hay %d números negativos en el arreglo",contador);
	return 0;
}
