#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>  // Biblioteca para poder utilizar Boolean

void main () {
  //code...
  int a = 10;

  // Conectivo 'AND' &&
  if (a > 5 && a < 15){
    printf("\n A variavel %d esta entre 5 e 15", a);
  }

  // Conectivo 'OR' ||
  if (a > 5 || a > 15){
     printf("\n A variavel %d esta entre 5 e 15", a);
  }

  //  Misturando conectivos
  if ( (a>5 && a<15) || a == 20 ){
     printf("\n A variavel %d esta entre 5 e 15 ou eh 20", a);
  }

  printf("\n");
  system("pause");
}
