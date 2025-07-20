// Librerias
#include <stdio.h>
#include <string.h>

//Funcion principal
int main()
{
  //Inicializamos un array
  char nameArr[50];
  //Colocamos un puntero que apunta al array
  char *nombre = nameArr;

  // Pedimos el nombre del usuario...
  printf("Ingrese su nombre\n");
  fgets(nombre, sizeof(nameArr), stdin);
  printf("Su nombre es %s\n", nombre);

  return 0;
}
