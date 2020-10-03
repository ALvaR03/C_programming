#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int i, valores[10]; 

    printf("Gerando 10 valores eleatorios\n");

    srand(time(NULL));

    printf("Os numeros sao: \n");
    for (i = 0; i < 10; i++) {
        /* Gerando valores aleatorios entre 0 e 100 */
        valores[i] = rand() % 100;
        printf("Valores[%d]\n", valores[i]);
    }

    printf("O valor do array Valores[%d]\n", valores[0]);
      
    return 0;
}
