#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main () {
    // Definindo Variaveis
    int a = 6, b = 3;

    // Soma ( + )
    printf("\n A soma de %d e %d eh == %d", a, b, a + b);

    // Subtra��o ( - )
    printf("\n A diferenca de %d e %d eh == %d", a, b, a - b);

    // Divis�o ( / )
    printf("\n A divisao de %d e %d eh == %d", a, b, a / b);


    // Multiplica��o ( * )
    printf("\n A multiplicacao de %d e %d eh == %d", a, b, a * b);


    // Resto da Divis�o  ( % )
    printf("\n O resto da divisao de %d e %d eh == %d", a, b, a % b);

    // O valor absoluto abs(n)
    printf("\n O valor absoluto de (-3) == %d", abs(-3));


    // Pausa o programa
    printf("\n");
    system("pause");
}
