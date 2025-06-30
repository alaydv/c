#include <stdio.h>
#define FILAS 3
#define COLUMNAS 3

void ingresarMatrix(int matrix[FILAS][COLUMNAS]){
  /*
   * Función que guarga cada elemento para una matriz
   */
  int validacion;
  for (int i=0; i < FILAS; i++) {
    for (int j=0; j<COLUMNAS; j++) {
      do {
      printf("\nIngresa un dato para la posición %d, %d: ", i, j);
      validacion = scanf("%d", &matrix[i][j]);
      if (validacion !=1) {
      printf("Error: Ingresa un entero\n");
      while(getchar() != '\n');
      }
      }while (validacion !=1);
    }
  }
}

int calcularDeterminante(int matrix[FILAS][COLUMNAS]){
  /*
   * Calcula el determinate mediante el metodo de Sarrus.
   */
  int determinate;
  int parte1, parte2;
  parte1 = (matrix[0][0]*matrix[1][1]*matrix[2][2])+(matrix[1][0]*matrix[2][1]*matrix[0][2])+(matrix[2][0]*matrix[0][1]*matrix[1][2]);
  parte2 = (matrix[0][2]*matrix[1][1]*matrix[2][0])+(matrix[1][2]*matrix[2][2]*matrix[0][0])+(matrix[2][2]*matrix[0][1]*matrix[1][0]);
  return determinate= parte1 - parte2;
}

void imprimirMatrix(int matrix[FILAS][COLUMNAS]){
  /*
   * Impre la matrix en pantalla.
   */
  for (int i=0; i < FILAS; i++) {
    for (int j=0; j<COLUMNAS; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

void sumaMatrix(int matrix[FILAS][COLUMNAS]){
  /*
   * Suma cada uno de los elementos e imprime el resultado.
   */
  int suma = 0;
  for (int i=0; i < FILAS; i++) {
    for (int j=0; j<COLUMNAS; j++) {
      suma += matrix[i][j];
    }
  }
  printf("\n La suma de los elementos de la matriz es: %d", suma);
}

int main()
{
  //Declaración de variables
  int matrix[FILAS][COLUMNAS];
  int determinate;

  //Llamada a las funciones
  ingresarMatrix(matrix);
  imprimirMatrix(matrix);
  determinate = calcularDeterminante(matrix);
  printf("\nEl determinante de la matriz es: %d", determinate);
  sumaMatrix(matrix);
  return 0;
}
