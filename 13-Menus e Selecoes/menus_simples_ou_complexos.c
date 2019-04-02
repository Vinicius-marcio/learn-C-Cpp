#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>  // Biblioteca para poder utilizar Boolean

void main () {
  //code...
  int opcao;

  while (opcao < 1 || opcao > 3){
    printf("\n Escolha uma opcao:");
    printf("\n 1- Opcao 1");
    printf("\n 2- Opcao 2");
    printf("\n 3- Opcao 3");

    printf("\n");
    scanf("%d", &opcao);

    switch (opcao){
      case 1:
        printf("\n A opcao escolhida eh 1");
        break;
      case 2:
        printf("\n A opcao escolhida eh 2");
        break;
      case 3:
        printf("\n A opcao escolhida eh 3");
        break;
      default:
        printf("\n A opcao invalida");
        break;
    }// switch
  }// while

  printf("\n");
  system("pause");
}
