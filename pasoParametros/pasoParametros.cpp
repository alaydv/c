#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
  char nombre[50];
  char ci[20];
  float saldo;
} Persona;

void borrarPantalla(){
  #ifdef _WIN32
    #define borrarPantalla() system("cls")
  #else
    #define borrarPantalla() system("clear")
  #endif
}

void sumaPorValor(int a, int b) {
	int resultado = a + b;
	printf("La suma es: %d\n", resultado);
}

void intercambiarValores(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void ingresarDatos(Persona *p){
  char buffer[100]; // Espacio temporal

  do { 
  printf("Ingresar nombre: \n");
  fgets(buffer, sizeof(buffer), stdin); //Guarda el resultado en buffer
  }while (strlen(buffer) <= 3);   // Se guarda solo si el campo es válido
  strcpy(p->nombre, buffer); // Se guarda el nombre después de la validación

  do {
  printf("Ingresar su cédula: \n");
  fgets(buffer, sizeof(buffer), stdin); //Guarda el resultado en buffer
  } while(strlen(buffer) != 10);
  strcpy(p->ci, buffer);

  printf("Ingresar su saldo: \n");
  while (scanf("%f", &p->saldo) != 1 || p->saldo <0) {
    printf("Error: Ingrese un valor válido\n");
  }
}

void actualizarDatos(Persona *p, float saldo){
  p->saldo = saldo;
}

void mostrarDatos(const Persona *p){
  printf("\n--- Datos de la Persona ---\n");
  printf("Nombre: %s\n", p->nombre);
  printf("Cédula: %s\n", p->ci);
  printf("Saldo: %.2f\n", p->saldo);
}

int main () {
  int num1 = 2;
  int num2 = 3;
  float nuevoSaldo;
  Persona p;

  //menu
  int opt = 0;
  do {
    borrarPantalla();
    printf("\t --Menú--\n");
    printf("1.Función con paso por valor que sume dos números\n");
    printf("2.Función con paso por referencia que modifique directamente los valores de dos variables\n");
    printf("3.Ingresar datos \n");
    printf("4.Mostrar datos \n");
    printf("5.Actualizar datos para el saldo de la persona \n");
    printf("6. Salir\n");
    printf("Ingrese la opción: \n");
    scanf("%d", &opt);
    getchar();

    switch (opt) {
      case 1:
        borrarPantalla();
        sumaPorValor(num1, num2);
        printf("Valores de las variables originales: num1 = %d, num2 = %d\n", num1, num2);
        printf("\nPresione ENTER para continuar...");
        getchar();
        break; 
      case 2:
        borrarPantalla();
        printf("El primer número es: %d, y el segundo número es %d\n", num1, num2);
        intercambiarValores(&num1, &num2);
        printf("Después del intercambio el primer número es %d, y el segundo número es %d\n", num1, num2);
        printf("\nPresione ENTER para continuar...");
        getchar();
        break;
      case 3:
        borrarPantalla();
        ingresarDatos(&p);
        break;
      case 4:
        borrarPantalla();
        mostrarDatos(&p);
        printf("\nPresione ENTER para continuar...");
        getchar();
        break;
      case 5:
        borrarPantalla();
        printf("Ingresa nuevo saldo: \n");
        scanf("%f", &nuevoSaldo);
        while (getchar() != '\n');
        actualizarDatos(&p, nuevoSaldo);
        printf("Su saldo se ha actualizado...");
        printf("\nPresione ENTER para continuar...");
        getchar();
        break;
        case 6:
        borrarPantalla();
        printf("Saliendo del programa ... \n");
        break;
      default:
        borrarPantalla();
        printf("Error: Ingrese una opción valida \n");
        printf("\nPresione ENTER para continuar...");
        getchar();
        break;
    }
  } while(opt != 6);
  return 0;
}
