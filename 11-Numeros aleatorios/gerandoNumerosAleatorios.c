#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>  // Biblioteca para poder utilizar Boolean
#include <time.h>
void main () {
  //code...

  // Responsável por alimentar de forma diferente
  srand((unsigned)time(NULL));

  // Definindo uma variável para receber o valor da divisao por 3
  int aleatorio = rand() % 3;

  printf("\n %d", aleatorio);

  printf("\n");
  system("pause");
}
