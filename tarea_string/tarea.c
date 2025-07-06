#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Variable global para llevar el control de los vehículos matriculados
int totalVehiculos=0;


//Calcular Matrícula
float calcularMatricula(float valorBase,int  anio){
	if (anio<2015){
		return valorBase*0.85; //15% de descuento
	} else if(anio<=2022){
		return valorBase*0.95; //5% de descuento
	}else{
		return valorBase;
	}
}
	
	
//Función para registrar Vehíulo 
void registrarVehiculo(){
	char propietario[50];
	int anio;
	float valorBase, totalPagar;
	//Leer Datos
	printf ("Ingrese el nombre del propietario:");
	getchar();
	fgets(propietario, sizeof(propietario),stdin);
	propietario[strspn(propietario, "\n")]= '\0';
	
	printf ("Ingrese el año del vehículo:");
	scanf ("%d", &anio);
	printf ("Ingrese el valor de la matrícula:");
	scanf ("%f", &valorBase);
	
	//Calcular valor a pagar
	totalPagar=calcularMatricula(valorBase, anio);
	
	//Mostrar Resumen
	getchar();
	printf ("============Resumen de Matrícula Vehicular============\n");
	printf ("Propietario %s\n", propietario);
	printf ("Año %d\n", anio);
	printf ("Valor Base %.2f\n", valorBase);
	printf ("Total a pagar %.2f\n", totalPagar);
	printf("\nPresiona enter para continuar...");
	getchar();
	
	//Incrementar contador global
	
}
	//Función para mostrar el total de vehículos
void mostrarTotalVehiculos(){
	printf ("\n Total de vehículos matriculados: %d", totalVehiculos);
	printf("\nPresiona enter para continuar...");
	getchar();
}

int main (){
	int opcion;
	
	do {
		system("clear");
		printf ("============Sistema de Matrícula Vehicular============\n");
		printf ("1. Registrar nuevo Vehículo\n");
		printf ("2. Mostrar total de Vehículos Matriculados\n");
		printf ("3. Salir.... \n");
		printf ("Seleccione una opción\n");
		scanf ("%d", &opcion);
		while(getchar() != '\n');
		switch (opcion){
		case 1:
			system("clear");
			registrarVehiculo();
			totalVehiculos += 1;
			break;
		case 2:
			system("clear");
			mostrarTotalVehiculos();
			break;
		case 3:
			system("clear");
			printf ("Saliendo del Sistema.....\n");
			break;
		default:
			printf ("Opción inválida, inténtelo nuevamente\n");
		}
		
	} while(opcion != 3);
	
	
	return 0;
}
