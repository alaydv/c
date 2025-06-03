#include <stdio.h>
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

int main() {
	inicializar_proceso();
	
	printf("Primer contacto:\nNombre: %s\nTeléfono: %s\nEmail: %s\n", 
	lista_contactos[0].name, lista_contactos[0].phone, lista_contactos[0].email);
	
	return 0;
}
