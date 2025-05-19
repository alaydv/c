// Programa que compara las contraseñas 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Variables
char password[30], passwordComp[30];


int main()
{
  printf("Ingrsa una contraseña segura: \n");
  fgets(password, 30, stdin);

  while (true) {
    printf("Vuleva a introducir la contraseña: \n");
    fgets(passwordComp, 30, stdin);
    if (strcmp(password, passwordComp) == 0){
      printf("Correcto las contraseñas son inguales \n");
      break;
    }else {
      printf("Las contraseñas no coinciden vuelve a intentar \n");
    }
    //system("clear");
    //system("cls");
  }   


  return 0;
}
