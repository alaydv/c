#include <stdio.h>


void menu(){
	printf ("\t-----Menú-----\n");
	printf ("1. Ingresar ventas.\n");
	printf ("2. Ver totales por tienda.\n");
	printf ("3. Ver totales por día.\n");
	printf ("4. Ver tienda y día con mayores ventas.\n");
	printf ("5. Salir del programa.\n");
}


void ingresarVentas(){
	printf("prox...\n");
}
void totalesTienda(){
	printf("prox...\n");
}
void totalesDía(){
	printf("prox...\n");
}
void tienda_día_mayores_ventas(){
	printf("prox...\n");
}

int main() {
	int opcion;
	int tiendas;
	int dias;

	do{
		printf("\n");
		scanf("%d", tiendas);
		printf("\n");
		scanf("%d", dias);
		
		menu();
		printf("Ingrese la opción que necesite\n");
		scanf("%d", &opcion);
		switch (opcion){
			case 1:
			ingresarVentas();
			break;
			case 2:
			totalesTienda();
			break;
			case 3:
			totalesDía();
			break;
			case 4:
			tienda_día_mayores_ventas();
			break;
			case 5:
			printf("Saliendo del sistema....\n");
			break;
			default:
			printf("Error: Elegir una opción correcta \n");
			break;
			}
	} while (opcion != 5);
	
	int ventas[tiendas][dias];
	int totalPorTienda[tiendas] = {0};
	int totalPorDia[dias] = {0};
	int i, j;

	// Entrada de datos
	printf("Ingrese las ventas de cada tienda por cada d�a:\n");
	for (i = 0; i < tiendas; i++) {
		printf("Tienda %d:\n", i + 1);
		for (j = 0; j < dias; j++) {
			printf("D�a %d: ", j + 1);
			scanf("%d", &ventas[i][j]);
		}
	}
	
	// C�lculo de totales por tienda y por d�a
	for (i = 0; i < tiendas; i++) {
		for (j = 0; j < dias; j++) {
			totalPorTienda[i] += ventas[i][j];
			totalPorDia[j] += ventas[i][j];
		}
	}
	
	// Determinar la tienda con mayores ventas
	int maxVentasTienda = 0, tiendaMayor = 0;
	for (i = 0; i < tiendas; i++) {
		if (totalPorTienda[i] > maxVentasTienda) {
			maxVentasTienda = totalPorTienda[i];
			tiendaMayor = i;
		}
	}
	
	// Determinar el d�a con mayores ventas
	int maxVentasDia = 0, diaMayor = 0;
	for (j = 0; j < dias; j++) {
		if (totalPorDia[j] > maxVentasDia) {
			maxVentasDia = totalPorDia[j];
			diaMayor = j;
		}
	}
	
	// Salida de resultados
	printf("\nVentas totales por tienda:\n");
	for (i = 0; i < tiendas; i++) {
		printf("Tienda %d: %d\n", i + 1, totalPorTienda[i]);
	}
	
	printf("\nVentas totales por d�a:\n");
	for (j = 0; j < dias; j++) {
		printf("D�a %d: %d\n", j + 1, totalPorDia[j]);
	}
	
	printf("\nLa tienda con mayores ventas es: Tienda %d con %d ventas.\n", tiendaMayor + 1, maxVentasTienda);
	printf("El d�a con mayores ventas es: D�a %d con %d ventas.\n", diaMayor + 1, maxVentasDia);
	
	return 0;
}
