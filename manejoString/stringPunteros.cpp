//Librerias
#include <stdio.h>
#include <string.h>

//Funcion principal
int main()
{
	//Inicializamos un array
	char nameArr[50];
	//Colocamos un puntero que apunta al array
	char *nombre;
	int longitud = 0;
	
	//Pedimos el nombre del usuario
	printf("Ingrese su nombre:\n");
	fgets(nameArr, sizeof(nameArr), stdin);
	nameArr[strcspn(nameArr, "\n")] = '\0';
	
	//Calculamos la longitud usando punteros
	nombre = nameArr;
	while (*nombre != '\0') {
		if (*nombre == '\n') break;  //Ignorar salto de línea de fgets
		longitud++;
		nombre++;
	}
	
	printf("La longitud de %s es %d \n", nameArr, longitud);
	
	//Contar vocales usando punteros
	nombre = nameArr; //Reiniciamos el puntero al inicio
	int vocales = 0;
	
	while (*nombre != '\0') {
		if (*nombre == '\n') break;  //Ignorar salto de línea
		
		//Verificamos si el carácter es vocal (minúscula o mayúscula)
		if (*nombre == 'a' || *nombre == 'e' || *nombre == 'i' || *nombre == 'o' || *nombre == 'u' ||
			*nombre == 'A' || *nombre == 'E' || *nombre == 'I' || *nombre == 'O' || *nombre == 'U') {
			*nombre= '*' ;
			vocales++;
		}
		
		nombre++;
	}
	
	printf("La cantidad de vocales es: %d\n", vocales);
	printf("Nombre con vocales reemplazadas: %s\n", nameArr);
	return 0;
}
