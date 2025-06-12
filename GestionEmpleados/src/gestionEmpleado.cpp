#include "gestionempleado.h"
#include <string.h>
#include <stdio.h>

//Función para crear persona
//Devuelve el aporte al IESS
float calcularAporteIESS(float salario){
  return salario * 0.0945;
}

//Devuelve el valor de la bonificacionPorCargo
float bonificacionPorCargo(float salario, const char *cargo){
  if(strcmp(cargo, "Gerente") == 0){
    return salario * 0.1;
  } else if (strcmp(cargo, "Técnico") == 0) {
    return salario * 0.05;
  } else if (strcmp(cargo, "Auxiliar") == 0) {
    return salario * 0.02;
  }
  return 0.0;
}

// Valida que el sueldo sea mayor a $400
int salarioMayorA400(float salario){
  if(salario >= 400.0){
    return 0;
  }else {
    return 1;
  }
}

//Registra los empleados, devuelve una estructua empleado con los datos solicidatos
Empleado registroEmpleado(){
  Empleado e;

  printf("Ingresa el nombre de tu Empleado:\n");
  fgets(e.nombre, sizeof(e.nombre), stdin);
  //Evitamos que fgets deje un salto de línea con:
  size_t len = strlen(e.nombre);
  if (len > 0 && e.nombre[len-1] == '\n'){
    e.nombre[len - 1] = '\0';
  }

  printf("Ingresa la cédula de tu empleado:\n");
  scanf("%s", &e.id);

  //Elegir el cargo del empleado
  int opt = 0;
  do { 
  printf("Ingresa el cargo de tu empleado:\n");
  printf("1. Para Gerente\n");
  printf("2. Para Técnico\n");
  printf("3. Para Auxiliar\n");
  printf("Ingresa la opción: \n");
  scanf("%d", &opt);
  switch (opt) {
    case 1:
      strcpy(e.cargo, "Gerente");
      break;
    case 2:
      strcpy(e.cargo, "Técnico");
      break;
    case 3:
      strcpy(e.cargo, "Auxiliar");
      break;
    default:
      printf("Error: Opción no valida\n");
      break;
  }
  }while (opt < 1 || opt > 3);


  //Pide el salario del empleado y verifica que sea mayor a 400
  do {
  printf("Ingresa el salario de tu empleado:\n");
  scanf("%f", &e.salario);
  if(salarioMayorA400(e.salario)){
    printf("Error: El salario debe ser mayor a 400 \n");
  }
  }while (salarioMayorA400(e.salario));

  return e;
}

