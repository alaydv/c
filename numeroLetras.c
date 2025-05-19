// Programa en el que se ingresa una frase y una letra y este devuelve el número de veces que se repite la letra.

#include <stdio.h>
#include <strings.h>

// Variables
char phrase[100];
char vocal;
int counterVocals = 0;

int main()
{
  printf("Ingresa una frase: \n");
  fgets(phrase, 100, stdin);

  printf("Ingresa una letra: \n");
  scanf("%s", &vocal);
  
  for (int i = 0; phrase[i] != '\0'; i++) {
    if (phrase[i] == vocal){
      counterVocals += 1;
    }
  }
  
  printf("La vocal %s se petite %d veces en tu frase.\n", &vocal, counterVocals);

  return 0;
}
