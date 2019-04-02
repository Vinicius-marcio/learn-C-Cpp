#include <stdio.h>
#include <stdlib.h>

void main () {
  //code...
  int a = 0, b = 10;
/* WHILE
  while(a<=10){
    printf("\n %d",a);
    a++; // Incremento
  }
  while (b>=1){
    printf("\n %d", b);
    b--;  // Decremento
  }
*/
/////////////////////////////////
/////////////////////////////////
/////////////////////////////////
/* DO WHILE
  do{
    // Imprimindo
    printf("\n %d",a);

    // Incremendo
    a++;
  }while(a<=10);
*/
/////////////////////////////////
/////////////////////////////////
/////////////////////////////////
/* FOR
    // TABUADA DO 5
  for (int cont = 1; cont <= 10; cont++ ) {
    printf("\n 5 X %d = %d", cont, 5*cont);
  }
    // CONTANDO DE 2 EM 2
  for (int cont = 0; cont <= 12; cont = cont+2 ){
    printf("\n %d", cont);
  }

  for (int cont = 10; cont >= 1; cont--){
      printf("\n %d", cont);
  }
  for (int cont = 10; cont >= 1; cont = cont - 2){
      printf("\n %d", cont);
  }

*/
  printf("\n");
  system("pause");
}
