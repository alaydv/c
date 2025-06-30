#include <stdio.h>
#define LEN 2

void ingresarMatrix(int matrix[LEN][LEN]){
  for (int i=0; i < LEN; i++) {
    for (int j=0; j < LEN; j++) {
      printf("Matriz[%d][%d]\n", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
}


int main()
{
  int matrix1[LEN][LEN];
  int matrix2[LEN][LEN];
  int producto[LEN][LEN];

  printf("Ingresa datos para la 1ra matriz\n");
  ingresarMatrix(matrix1);
  printf("Ingresa datos para la 2da matriz\n");
  ingresarMatrix(matrix2);

  // Producto de matrices
  // Recorremos la columna de la segunda matriz
  for (int columna2=0; columna2<LEN; columna2++) {
    //Recorremos la fila de la primera matriz
    for (int fila1=0; fila1<LEN; fila1++) {
      int suma = 0;
      //Recorremos la columna de la primera matriz
      for (int columna1=0; columna1<LEN; columna1++) {
        //Multiplicamos y sumamos los resultados
        suma += matrix1[fila1][columna1] * matrix2[columna1][columna2];
      }
      // Colocamos los resultados dentro del la matriz
      producto[fila1][columna2] = suma;
    }
  }

  printf("El producto de las matrices es: \n");
  for (int i=0; i<LEN; i++) {
    for (int j=0; j<LEN; j++) {
      printf("%d  ", producto[i][j]);
    }
    printf("\n");
  }
  return 0;
}
