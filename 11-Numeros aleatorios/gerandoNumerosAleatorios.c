#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>  // Biblioteca para poder utilizar Boolean
#include <time.h>
void main () {
  //code...

  // Respons�vel por alimentar de forma diferente
  srand((unsigned)time(NULL));

  // Definindo uma vari�vel para receber o valor da divisao por 3
  int aleatorio = rand() % 3;

  printf("\n %d", aleatorio);

  printf("\n");
  system("pause");
}
