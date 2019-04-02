#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>  // Biblioteca para poder utilizar Boolean

void main () {
  //code...
  int vetor[3];
  int valor = 5;
  // INSERINDO VALORES NO VETOR
  for(int i = 0; i<=2; i++){
    vetor[i]=valor;
    printf("\n Posicao %d VALOR = %d", i, vetor[i]);
    valor = valor+5;
  }

  for(int i = 0; i<=2; i++){
    printf("\n Insira o valor para a posicao %d do VETOR", i);
    scanf("%d", &vetor[i]);
    printf("\n Posicao %d VALOR = %d", i, vetor[i]);
  }

printf("\n");
  system("pause");
}

