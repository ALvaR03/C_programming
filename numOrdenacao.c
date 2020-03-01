#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MaxTam 10 

int main(void) {
    setlocale(LC_ALL, "");
    system("cls");

    int numeros[MaxTam];
    int i, aux, contador;

    for (i = 0; i < MaxTam; i++) {
        printf("Entre com os numeros: ");
        scanf("%d", &numeros[i]);
    }

        printf("Ordem atual do itens no array: \n");
        for (i = 0; i < MaxTam; i++) {
            printf("%4d-", numeros[i]);
        }

        for (contador = 0; contador < MaxTam; contador++) {
            for (i = 0; i < MaxTam - 1; i++) {
                if (numeros[i] > numeros[i + 1]) {
                    aux = numeros[i];
                    numeros[i] = numeros[i + 1];
                    numeros[i + 1] = aux;
                }
                
            }
        }
        
            printf("\nOrdenados:\n");
            for (i = 0; i < MaxTam; i++) {
                printf("%4d\n", numeros[i]);
            }
                
    
    printf("\n");
    return 0;
}