#include <stdio.h>
#include "gestionempleado.h"

int main() {
  Empleado e = registroEmpleado();

  printf("\nEmpleado registrado:\n");
  printf("Nombre: %s\n", e.nombre);
  printf("Cédula: %s\n", e.id);
  printf("Cargo: %s\n", e.cargo);
  printf("Salario: %.2f\n", e.salario);

  float aporte = calcularAporteIESS(e.salario);
  float bonif = bonificacionPorCargo(e.salario, e.cargo);

  printf("Aporte IESS: %.2f\n", aporte);
  printf("Bonificación por cargo: %.2f\n", bonif);

  return 0;
}
