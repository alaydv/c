//Algoritmo que ayude a calcular los precios de una tienda de ropa.
#include <stdio.h>
// Indica el precio de los prodectos
int precio_productos(int cantidad_prenda1, int cantidad_prenda2, int cantidad_prenda3){
	int precio_productos = 0;
	int precio_camisetas=8;
	int precio_pantalones=10;
	int precio_abrigos=15;
	
	precio_productos = precio_productos + (precio_camisetas*cantidad_prenda1) + (precio_pantalones*cantidad_prenda2) + (precio_abrigos*cantidad_prenda3);
	return precio_productos;
}

// Indica el número total de preoductos
	int total_productos (int cantidad_prenda1, int cantidad_prenda2, int cantidad_prenda3){
		int total_productos=0;
		total_productos=cantidad_prenda1+cantidad_prenda2+cantidad_prenda3;
		return total_productos;
	}

//Decuento que se aplica si se compran más de 10 prendas
	float descuento_cantidad(int precio_productos,int total_productos){
		float descuento_cantidad=0.0;
		if (total_productos>10){
			descuento_cantidad= (float) precio_productos*0.1;
			return descuento_cantidad;
		}else {
			printf ("\nNo aplica descuento: \n");
			return descuento_cantidad;
		}
	}

// Si hay una persona de la tercera edad se le garantiza un descuento
float descuentoTerceraEdad(int edad, int precioTotal){
  float descuento = 0.0;

  if (edad >= 65){
    descuento = (float) precioTotal * 0.03;
    return descuento;
  }else {
   printf("No se aplica descuento dado que tu edad es %d\n", edad); 
    return descuento;
  }
}

// Nos indica el precio total a pagar una vez se incluyen los descuentos
float descueentoTotal(int precioTotal, float cantidad, float terceraEdad){
  return precioTotal - cantidad - terceraEdad;
}

int main(){
	int camisetas, pantalones, abrigos, edad;

printf("\tBienvenido a la tienda RopaFashion\n");
printf("Ingrese la cantidad de camisetas a adquirir: \n");
scanf("%d", &camisetas);

printf("Ingrese la cantidad de pantalones a adquirir: \n");
scanf("%d", &pantalones);

printf("Ingrese la cantidad de abrigos a adquirir: \n");
scanf("%d", &abrigos);

printf("Ingresa tu edad: \n");
scanf("%d", &edad);

int precioTotal = precio_productos(camisetas, pantalones, abrigos);
float cantidad = descuento_cantidad(precioTotal ,total_productos(camisetas,pantalones,abrigos));
float terceraEdad = descuentoTerceraEdad(edad, precioTotal);

printf("La cantidad total de las prendas a comprar son: %d \n",total_productos(camisetas,pantalones,abrigos));

printf("El precio es: %d\n", precioTotal);
printf("El descuento por cantidad (si aplica) es: %.2f\n", cantidad);
printf("El descuento es por edad es: %.2f \n", terceraEdad);
printf("El precio con el descuento total es de: %.2f \n ", descueentoTotal(precioTotal, terceraEdad, cantidad));

	return 0;
}
