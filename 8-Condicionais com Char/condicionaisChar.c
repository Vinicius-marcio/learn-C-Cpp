#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>  // Biblioteca para poder utilizar Boolean

void main () {
  //code...
  char letra = 'x';

  if(letra == 'X' || letra == 'x'){
    printf("\n A letra eh: %c", letra);
  }else{
    printf("\n A letra nao eh 'X'");
  }

  printf("\n O codigo da letra eh %d", letra);

  if (letra == 120){
    printf ("\n A letra eh 'x'");
  }

  printf("\n");
  system("pause");
}
