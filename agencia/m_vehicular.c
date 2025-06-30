#include <stdio.h>
#define MESES 12
#define TIPOV 4

const char *vehiculos[TIPOV] = {"Automóvil", "Motocicleta", "Camiones", "Buses"};
const char *meses[MESES] = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};

void menu() {
    printf("\n\t-- Matriculaciones Mensuales --\n");
    for (int i = 0; i < TIPOV; i++) {
        printf("%d. Ingresar datos para %s\n", i + 1, vehiculos[i]);
    }
    printf("5. Ver matriz de datos\n");
    printf("6. Ver cálculos\n");
    printf("7. Salir\n");
    printf("Ingresa una opción: ");
}

void ingresaDatos(int tipo, int datos[TIPOV][MESES]) {
    printf("Ingresa las matriculaciones mensuales para %s:\n", vehiculos[tipo]);
    for (int i = 0; i < MESES; i++) {
        printf("%s: ", meses[i]);
        scanf("%d", &datos[tipo][i]);
    }
}

void imprimirMatriz(int datos[TIPOV][MESES]) {
    printf("\n\tMatriz de Matriculaciones:\n");
    printf("%12s", "");
    for (int j = 0; j < MESES; j++) {
        printf("%5s", meses[j]);
    }
    printf("\n");

    for (int i = 0; i < TIPOV; i++) {
        printf("%12s", vehiculos[i]);
        for (int j = 0; j < MESES; j++) {
            printf("%5d", datos[i][j]);
        }
        printf("\n");
    }
}

void totalPorTipo(int datos[TIPOV][MESES]) {
    printf("\nTotal anual por tipo de vehículo:\n");
    for (int i = 0; i < TIPOV; i++) {
        int suma = 0;
        for (int j = 0; j < MESES; j++) {
            suma += datos[i][j];
        }
        printf("%s: %d\n", vehiculos[i], suma);
    }
}

void mayorMes(int datos[TIPOV][MESES]) {
    int maxMes = 0;
    int sumaMax = 0;
    for (int j = 0; j < MESES; j++) {
        int suma = 0;
        for (int i = 0; i < TIPOV; i++) {
            suma += datos[i][j];
        }
        if (suma > sumaMax) {
            sumaMax = suma;
            maxMes = j;
        }
    }
    printf("\nMes con mayor matriculación: %s (%d vehículos)\n", meses[maxMes], sumaMax);
}

void vehiculoMasMatriculado(int datos[TIPOV][MESES]) {
    int maxTipo = 0;
    int maxSuma = 0;
    for (int i = 0; i < TIPOV; i++) {
        int suma = 0;
        for (int j = 0; j < MESES; j++) {
            suma += datos[i][j];
        }
        if (suma > maxSuma) {
            maxSuma = suma;
            maxTipo = i;
        }
    }
    printf("Tipo de vehículo más matriculado en el año: %s (%d matriculaciones)\n", vehiculos[maxTipo], maxSuma);
}

int main() {
    int datos[TIPOV][MESES] = {0}; // inicializar a 0
    int opt;

    do {
        menu();
        if (scanf("%d", &opt) != 1) {
            printf("Entrada inválida. Intenta de nuevo.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (opt) {
            case 1:
            case 2:
            case 3:
            case 4:
                ingresaDatos(opt - 1, datos);
                break;
            case 5:
                imprimirMatriz(datos);
                break;
            case 6:
                totalPorTipo(datos);
                mayorMes(datos);
                vehiculoMasMatriculado(datos);
                break;
            case 7:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intenta de nuevo.\n");
        }
    } while (opt != 7);

    return 0;
}
