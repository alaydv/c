#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//Aquí definimos el tamaño máximo de la lista de contactos, que en este caso es 50.
#define Contactos 50

 //Se escribe la estructura de un contacto.
typedef struct Contact {
	char name[50];
	char phone[15];
	char email[50];
} Contact;

//Parte que almacena la lista de contactos.
Contact lista_contactos[Contactos];
int contador = 0;

//Se inicializa el proceso para la lista de contactos.
void inicializar_proceso() {
	for (int i = 0; i < Contactos; i++) {
		strcpy(lista_contactos[i].name, "");
		strcpy(lista_contactos[i].phone, "");
		strcpy(lista_contactos[i].email, "");
	}
	contador = 0; //Aqui nos aseguramos que todos los contactos están vacíos al inicio.
}
/*

  Validaciones para la agregración de datos

 */

int campoVacio(const char* str){
  return strlen(str) == 0;
}

int validadorNumero(const char* numero){
  
  for (int i=0; i < strlen(numero); i++){
    if (!isdigit(numero[i])) return 0;
  }
  return 1;
}

int validadorEmail(const char* email){
  const char* arroba = strchr(email, '@' );
  const char* punto = strchr(email, '.' );
  if (!arroba || !punto) return 0;
  return 1;
}

//Funciones del programa

void borrarPantalla() {
#ifdef _WIN32
    system("cls");  // Windows
#else
    system("clear");  // Linux / macOS
#endif
}

void agregarContacto(int i, const char* nombre, const char* numero, const char* email){
  if (i >= Contactos){
    printf("No hay espacio disponible para más contactos.\n");
    printf("Presiona Enter para continuar...");
    getchar();
    return;
  }

  if (campoVacio(lista_contactos[i].name)) {
    if (campoVacio(nombre) || campoVacio(numero) || campoVacio(email)){
      printf("Error: Todos los campos deben estar llenos.\n");
      printf("Presiona Enter para continuar...");
      getchar();
      return;
    }
    if (!validadorNumero(numero)){
      printf("Error: El teléfono debe contener solo números.\n");
      printf("Presiona Enter para continuar...");
      getchar();
      return;
    }
    if (!validadorEmail(email)) {
      printf("Error: Email inválido.\n");
      printf("Presiona Enter para continuar...");
      getchar();
      return;
    }

    // Si todo está bien, agrega
    strcpy(lista_contactos[i].name, nombre);
    strcpy(lista_contactos[i].phone, numero);
    strcpy(lista_contactos[i].email, email);
    printf("Contacto agregado en la posición %d.\n", i);
    return;
  }

  agregarContacto(i + 1, nombre, numero, email); // Sigue buscando espacio
}

void mostrarContactos(int i) {
    if (i >= Contactos) return;

    if (!campoVacio(lista_contactos[i].name)) {
        printf("Contacto #%d:\n", i + 1);
        printf("Nombre: %s\n", lista_contactos[i].name);
        printf("Teléfono: %s\n", lista_contactos[i].phone);
        printf("Email: %s\n\n", lista_contactos[i].email);
    }

    mostrarContactos(i + 1);
}

void buscarContacto() {
	
}




int main(){
  inicializar_proceso();
	int opc=0, contacto;
  char nombre[50], numero[15], email[50];
	do{
  borrarPantalla();
	printf("SISTEMA DE GESTIÓN DE CONTACTOS");
	printf("\n-----------------------------------------------------Menú Principal-----------------------------------------------------\n");
	printf("1. Agregar un contacto \n");
	printf("2. Mostrar todos los contactos \n");
	printf("3. Buscar un contacto \n");
	printf("4. Eliminar un contacto \n");
	printf("5. Salir \n");
	printf("\nSeleccione alguna opcion (1-5)\n");
	scanf("%d",&opc);
  while (getchar() != '\n'); // limpia el búfer de entrada
	switch (opc){
	case 1:
    borrarPantalla();
    printf("\n--- Agregar nuevo contacto ---\n");

        // Nombre
        printf("Nombre: \n");
        fgets(nombre, sizeof(nombre), stdin);
        nombre[strcspn(nombre, "\n")] = 0;  // Quitar salto de línea

        // Teléfono
        printf("Teléfono: \n");
        fgets(numero, sizeof(numero), stdin);
        numero[strcspn(numero, "\n")] = 0;

        // Email
        printf("Email: \n");
        fgets(email, sizeof(email), stdin);
        email[strcspn(email, "\n")] = 0;

        agregarContacto(0, nombre, numero, email);
		break;
	case 2:
    borrarPantalla();
    printf("--- Lista de contactos ---\n");
    mostrarContactos(0);
    printf("Presiona Enter para continuar...");
    getchar();
      break;
	case 3:
    borrarPantalla();
		printf("Escribe el nombre del contacto a buscar: \n");
		scanf ("%d",&contacto);
		break;
		
	case 4:
    borrarPantalla();
		printf("Escribe el nombre del contacto a eliminar: \n");
		break;
	case 5:
		printf("Fin del programa....\n");
		break;
	} 
	
	}while(opc != 5);
	return 0;
}

