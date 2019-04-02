#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>  // Biblioteca para poder utilizar Boolean

void main () {
  //code...
  int a = 70;
  char b = 'x';

  // SWITCH com numeros
  switch(a){
    case 1:
      printf("\n Opcao escolhida 1");
      break;
    case 2:
      printf("\n Opcao escolhida 2");
      break;
    case 3:
      printf("\n Opcao escolhida 3");
      break;
    default:
      printf("\n Opcao Invalida");
      break;
  }

  //SWITCH com char
  switch(b){
    case 'x':
      printf("\n A letra eh 'x'");
      break;
    default:
      printf("\n Opcao Iinvalida");
      break;
  }

  printf("\n");
  system("pause");
}
