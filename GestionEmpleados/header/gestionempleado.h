#ifndef GESTIONEMPLEADOS_H
#define GESTIONEMPLEADOS_H

//Declaración de la estructura empleado
typedef struct{
  char nombre[50];
  char id[40];
  char cargo[50];
  float salario;
} Empleado;

//Declaración de funciones
Empleado registroEmpleado();
float calcularAporteIESS(float salario);
float bonificacionPorCargo(float salario, const char *cargo);
int salarioMayorA400(float salario);

#endif // GESTIONEMPLEADOS_H
