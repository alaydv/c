#include <stdio.h>
#define LEN 8

void ingresarDatos(int arr[LEN]){
  for (int i=0; i<LEN; i++) {
    printf("Ingresa Datos para la posición %d: ", i+1);
    scanf("%d", &arr[i]);
  }
}

int main()
{
  int arr[LEN];
  int temporal, respuesta;
  ingresarDatos(arr);

  respuesta = arr[0];

  for (int i=0; i<LEN; i++) {
    temporal = arr[i];
    if (temporal > respuesta) {
      respuesta = temporal;
    }
  }
  printf("El número más alto del arreglo es: %d", respuesta);
  return 0;
}
