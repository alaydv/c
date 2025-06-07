#include <stdio.h>

// Función para mostrar el menú
void mostrarMenu() {
    printf("\n----- Cajero Automático -----\n");
    printf("1. Consultar saldo\n");
    printf("2. Retirar dinero\n");
    printf("3. Depositar dinero\n");
    printf("4. Salir\n");
    printf("Ingrese su opción: ");
}

// Función para consultar saldo
void consultarSaldo(float saldo) {
    printf("Su saldo actual es: $%.2f\n", saldo);
}

// Función para retirar dinero
void retirarDinero(float *saldo) {
    float monto;
    printf("Ingrese el monto a retirar: ");
    scanf("%f", &monto);

    if (monto > 0 && monto <= *saldo) {
        *saldo -= monto;
        printf("Retiro exitoso. Nuevo saldo: $%.2f\n", *saldo);
    } else if (monto <= 0) {
        printf("El monto debe ser positivo.\n");
    } else {
        printf("Saldo insuficiente.\n");
    }
}

// Función para depositar dinero
void depositarDinero(float *saldo) {
    float monto;
    printf("Ingrese el monto a depositar: ");
    scanf("%f", &monto);

    if (monto > 0) {
        *saldo += monto;
        printf("Depósito exitoso. Nuevo saldo: $%.2f\n", *saldo);
    } else {
        printf("El monto debe ser positivo.\n");
    }
}

int main() {
    float saldo = 1000.0;
    int opcion;

    do {
        mostrarMenu();
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                consultarSaldo(saldo);
                break;
            case 2:
                retirarDinero(&saldo);
                break;
            case 3:
                depositarDinero(&saldo);
                break;
            case 4:
                printf("Gracias por usar el cajero. ¡Hasta luego!\n");
                break;
            default:
                printf("Opción inválida. Intente de nuevo.\n");
        }

    } while(opcion != 4);

    return 0;
}
