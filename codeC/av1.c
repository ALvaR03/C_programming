#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Estado {
    char nome[20];
    char unidadeFed[3];
    int quantPopulacional;
} Estado;

void cadEstado();
void buscarEst();
Estado est[2];

int main(void) {

    cadEstado();    
    buscarEst();

    return 0;
}

void cadEstado() {
    for (int i = 0; i < 2; i++) {
        printf("Digite o nome do estado: ");
        setbuf(stdin, NULL);
        fgets(est[i].nome, sizeof(est[i].nome), stdin);

        printf("Digite a UF: ");
        setbuf(stdin, NULL);
        fgets(est[i].unidadeFed, sizeof(est[i].unidadeFed), stdin);

        printf("Quantidade Populacional: ");
        scanf("%i", &est[i].quantPopulacional);

        system("@cls || clear");
        printf("Estado cadastrado!\n");
    }
}

void buscarEst() {
    int achou;
    char pesqEst[3];
    achou = 0;
    printf("Digite a unidade federativa: ");
    setbuf(stdin, NULL);
    fgets(pesqEst, sizeof(pesqEst), stdin);

    for (int c = 0; c < 2; c++) {
        achou = 1;
        if (strcmp(est[c].unidadeFed, pesqEst) == 0 || strcmp(est[c].nome, pesqEst) == 0) {
            printf("\nDados encontrados!!!\n");
            printf("Nome: %s", est[c].nome);
            printf("UF: %s\n", est[c].unidadeFed);
            printf("Quantidade populacional: %i\n", est[c].quantPopulacional);
        }
        if (achou == 0) {
            printf("Finalizado\n");
        }
    }
}
