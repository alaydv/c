// Programa que al ingresar un número crea un triangulo rectangulo con números

#include <stdio.h>

// Variables
int number;

int main()
{
  printf("Ingresa un número: \n");
  scanf("%d", &number);
  
// Tranformo el número a un impar
  if (number % 2 == 0){
    number -= 1;
  }

  for (int row = 1; row <= (number + 1)/2 ; row++) {
    
    int repetion = 2 * row-1;

    for (int i = repetion; i >= 1; i -= 2) {

      printf("%d ", i);
    }
    printf("\n");

  }


  return 0;
}
