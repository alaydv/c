#include <stdio.h>
#define LEN 5

void ingresarDatos(int arr[LEN]){
  for (int i=0; i<LEN; i++) {
    printf("Ingresa Datos para la posición %d: ", i+1);
    scanf("%d", &arr[i]);
  }
}

int main()
{
  int arr1[LEN];
  int arr2[LEN];
  int respuesta[LEN];

  printf("Ingresa datos para el 1er array\n");
  ingresarDatos(arr1);
  printf("Ingresa datos para el 2do array\n");
  ingresarDatos(arr2);

  //Suma de los array
  for (int i =0; i<LEN; i++) {
    respuesta[i] = arr1[i] + arr2[i];
  }

  //Impremir respuesta
  printf("La respuesta de la suma es: \n");
  for (int i=0; i<LEN; i++) {
    printf("%d ", respuesta[i]);
  }

  return 0;
}
