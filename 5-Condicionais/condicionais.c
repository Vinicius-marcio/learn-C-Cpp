#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main (){
    int a = 7;
    float b = 2.5;
    char c;

    // Condicional Simples
    if (a == 5){
        printf("\n Verdadeiro");
    }else{
        printf("\n eh diferente de 5");
    }

    if  (b == 2.5){
         printf("\n Verdadeiro");
    }

    printf("\n");
     scanf(" %c", &c);
    if (c == 'x' || c == 'X'){
         printf("\n a letra %c eh igual a x ou X", c);
    }else{
        printf("\n a letra %c NAO eh igual a x ou X", c);
    }

    // Par ou Impar
    /**
    *
    *   Para verificar se um numero é PAR ou IMPAR
    *   basta pegar o resto do resultado da
    *   divisao do mesmo por 2, se for igual a 0 é par se não Impar
    *
    */

    if ( a % 2 == 1){
        printf("\n O numero %d eh IMPAR", a);
    }else{
        printf("\n O numero %d eh PAR", a);
    }

    printf("\n");
    system("pause");
}
