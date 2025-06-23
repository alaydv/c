#include <stdio.h>
#include <string.h>
// Variable global
int totalEstudiantes = 0;

// Funci�n para mostrar los datos del estudiante
void mostrarDatos(char nombre[], int edad, float notaA, float notaC, float notaD, float notaM, float notaP, float promedioFinal) {
	printf("\n===== REGISTRO EXITOSO =====\n");
	printf("Nombre del estudiante: %s\n", nombre);
	printf("Edad: %d\n", edad);
	printf("Nota final de Algebra: %.2f\n", notaA);
	printf("Nota final de C�lculo: %.2f\n", notaC);
	printf("Nota final de Deportes: %.2f\n", notaD);
	printf("Nota final de Mec�nica: %.2f\n", notaM);
	printf("Nota final de Programaci�n: %.2f\n", notaP);
	printf("Promedio Final: %.2f\n", promedioFinal);
	
	totalEstudiantes++;
}

// Valicion de la nota est� entre 0 y 10
float leerNota(const char* materia) {
	float nota;
	do {
		printf("Ingrese su nota final de %s (0 a 10): ", materia);
		scanf("%f", &nota);
		if (nota < 0 || nota > 10) {
			printf("Nota no valida, debe estar entre 0 y 10.\n");
		}
	} while (nota < 0 || nota > 10);
	return nota;
}

// Funci�n para registrar estudiantes
void registrarEstudiante() {
	char nombre[30];
	int edad;
	float notaA, notaC, notaD, notaM, notaP, promedioFinal;
	
	printf("\nIngrese el nombre del estudiante: ");
	getchar(); 
	fgets(nombre, sizeof(nombre), stdin);
	nombre[strcspn(nombre, "\n")] = 0;  
	
	// Validaci�n de edad
	do {
		printf("Ingrese su edad: ");
		scanf("%d", &edad);
		if (edad <= 0) {
			printf("Edad no valida, debe ser un n�mero positivo.\n");
		}
	} while (edad <= 0);
	
	// Leer notas con validaci�n (1-10)
	notaA = leerNota("Algebra");
	notaC = leerNota("C�lculo");
	notaD = leerNota("Deportes");
	notaM = leerNota("Mec�nica");
	notaP = leerNota("Programaci�n");
	
	// Calcular promedio de notas
	promedioFinal = (notaA + notaC + notaD + notaM + notaP) / 5;
	
	// Mostrar resumen de datos
	mostrarDatos(nombre, edad, notaA, notaC, notaD, notaM, notaP, promedioFinal);
}

// Mostrar total de estudiantes con variable global
void mostrarTotalEstudiantes() {
	printf("\nTotal de estudiantes registrados: %d\n", totalEstudiantes);
}

// Funcion Principal
int main() {
	int opcion;
	int valid;

	do {
		printf("\n===== SISTEMA DE REGISTRO DE ESTUDIANTES =====\n");
		printf("1. Registrar nuevo estudiante\n");
		printf("2. Mostrar total de estudiantes registrados\n");
		printf("3. Salir\n");
		do
		{
			printf("Seleccione una opción: ");
			valid = scanf("%d", &opcion);
			if (valid != 1) {
				printf("Entrada inválida. Ingrese un número entre 1 y 3.\n");
				while (getchar() != '\n'); // Limpia el búfer de entrada
				opcion = -1; // Fuerza repetir el menú
			}
		} while (valid != 1);
		
		switch(opcion) {
		case 1:
			registrarEstudiante();
			break;
		case 2:
			mostrarTotalEstudiantes();
			break;
		case 3:
			printf("Saliendo del sistema...\n");
			break;
		default:
			printf("Opción no válida, intente nuevamente.\n");
			break;
		}
		
	} while(opcion != 3);
	
	return 0;
}
