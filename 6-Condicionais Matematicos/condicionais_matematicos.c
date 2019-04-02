#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main (){
    int a=5, b=10, c=15;
    char d = 'x';

    // Maior ( > )
    if  (a > 2 ){
        printf("\n %d eh maior que 2", a);
    }

    // Maior igual ( >= )
    if  (c >= b){
        printf("\n %d eh maior ou igual que %d ", c, b);
    }

    // Menor que ( < )
    if  (a < 10 ){
        printf("\n %d eh menor que 10", a);
    }

    // Menor igual ( <= )
    if  (b <= 10 ){
        printf("\n %d eh menor igual que 10", b);
    }

    // Diferente ( != )
    if (c != 10){
        printf("\n %d eh diferente de 10", c);
    }
    if  (d != 'a'){
        printf("\n %c eh diferente de 'a'", d);
    }

    printf("\n");
    system("pause");
}
