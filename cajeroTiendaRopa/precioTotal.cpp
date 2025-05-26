//Algoritmo que ayude a calcular los precios de una tienda de ropa.
#include <stdio.h>
int precio_productos(int cantidad_prenda1, int cantidad_prenda2, int cantidad_prenda3){
	int precio_productos = 0;
	int precio_camisetas=8;
	int precio_pantalones=10;
	int precio_abrigos=15;
	
	precio_productos = precio_productos + (precio_camisetas*cantidad_prenda1) + (precio_pantalones*cantidad_prenda2) + (precio_abrigos*cantidad_prenda3);
	return precio_productos;
}
int main(){
	int camisetas, pantalones, abrigos;

printf("Ingrese la cantidad de camisetas a adquirir: \n");
scanf("%d", &camisetas);

printf("Ingrese la cantidad de pantalones a adquirir: \n");
scanf("%d", &pantalones);

printf("Ingrese la cantidad de abrigos a adquirir: \n");
scanf("%d", &abrigos);

printf("El precio total es: %d", precio_productos(camisetas,pantalones,abrigos));
	
	return 0;
}
