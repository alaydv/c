#include <stdio.h>
#include <string.h>


void resultado(float promedio){
    if (promedio >= 4) {
        printf("Excelente servicio\n");
    } else if (promedio >= 3) {
        printf("Servicio aceptable\n");
    } else {
        printf("Servicio deficiente\n");
    }
}

int main(){
    float salario = 1000.0;
    float cantidad = 0.0;
    int contadorDe5 = 0, totalCalificaciones = 0, sumaCalificaciones = 0, calificacion = 0;
    char nombre[100];
    char continuar = 's';

    while (continuar == 's' || continuar == 'S')
    {
        printf("Ingrese su nombre: \n");
        fgets(nombre, sizeof(nombre), stdin);

        printf("Califique el servicio (1 a 5): ");
        scanf("%d", &calificacion);
        while (getchar() != '\n');

        if (calificacion >= 1 && calificacion <= 5){
            totalCalificaciones++;
            sumaCalificaciones += calificacion;
            if (calificacion == 5){
                contadorDe5++;
            }
        }else{
            printf("Calificación inválida. Intente de nuevo.\n");
        }

        printf("¿Desea ingresar otra respuesta? (s/n): ");
        scanf(" %c", &continuar);
        while (getchar() != '\n');
    }
    float promedio = (float)sumaCalificaciones / totalCalificaciones;
    printf("\n--- Reporte Final ---\n");
    printf("Total de calificaciones: %d\n", totalCalificaciones);
    printf("Cantidad de personas que calificaron con 5: %d\n", contadorDe5);
    printf("Promedio general de calificaciones: %.2f\n", promedio);
    resultado(promedio);

    return 0;
}