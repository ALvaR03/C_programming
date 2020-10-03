#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Produto {
    char nome[15];
    int qtd;
    float valor;
} Produto;

typedef struct _ADM {
    char login[15];
    int senha;
} ADM;

typedef struct _Funcionario {
    char nome[15];
    int mat;
    ADM admSistema;
} Funcionario;

//  Declaracao das variaveis globais
ADM dono;
Funcionario vetFunc[3];
Produto vetProd[3];
int control = 0;

//  Declaracao dos procedimentos
void Autentica();

void MenuAdm();
void MenuFunc();

void CadastrarFunc();
void CadsProduto();
void realizaVenda();


int main(void) { // Inicio da main

    printf("\n\n\n\tCadastre um Login e uma Senha.\n");
    printf("\n\tLogin: ");
    setbuf(stdin, NULL);
    fgets(dono.login, sizeof(dono.login), stdin);
    printf("\tSenha: ");
    scanf("%d", &dono.senha);

    MenuAdm();

    return 0;
}

void Autentica() {

    char loginLocal[15];
    int  senhaLocal;

    do {
        printf("\n\t\tLogin: ");
        setbuf(stdin, NULL);
        fgets(loginLocal, sizeof(loginLocal), stdin);
        printf("\t\tSenha: ");
        scanf("%d", &senhaLocal);

        if ((strcmp(dono.login, loginLocal) == 0) && (dono.senha == senhaLocal)) {
            printf("\n");
            control = 2;
        } else {
            system("@cls || clear");
            printf("\t Error: Login ou senha invalidos!!\n");
            control = 1;
        }
    } while (control == 1);

} // Fim autenticar

void MenuAdm() {
    
    int opcao;
    do {
        system("@cls || clear");
        printf("\n\n\t\t   O administrador esta online!!\n\n");
        printf("\t\t|--------------------------------|\n");
        printf("\t\t|    1 - Cadastrar funcionario   |\n");
        printf("\t\t|    2 - Cadastrar produto       |\n");
        printf("\t\t|    3 - Menu Funcionario        |\n");
        printf("\t\t|    4 - Gerar relatorio         |\n");
        printf("\t\t|    0 - Sair do sistema         |\n");
        printf("\t\t|--------------------------------|\n");
        printf("\t\t     Opcao: ");
        scanf("%d", &opcao);
        printf("\t\t|--------------------------------|\n");
        
        printf("\t\t    -+- Autenticar ADM -+-\n");
        switch(opcao) {
            case 1:
                Autentica();
                printf("\tUsuario autenticado!!\n");
                setbuf(stdin, NULL);
                getchar();
                CadastrarFunc();
                break;
            case 2:
                Autentica();
                printf("\tUsuario autenticado!!\n");
                setbuf(stdin, NULL);
                getchar();
                CadsProduto();
                break;
            case 3:
                MenuFunc();
                break;
            case 4:
                break;
            default:
                printf("\t\t\tSaiu!!!\n");
                exit(0);
                break;
        }
    } while (opcao != 0);

} // Fim MenuAdm

void CadastrarFunc() {

    int registro = 0;
    system("@cls || clear");
    printf("\tCadastro funcionario!!!\n\n");
    for (int f = 0; f < 3; f++) {

            printf("\t\tNome: ");
            setbuf(stdin, NULL);
            fgets(vetFunc[f].nome, sizeof(vetFunc[f].nome), stdin);

            printf("\t\tMatricula: ");
            setbuf(stdin, NULL);
            scanf("%i", &vetFunc[f].mat);

        if (vetFunc[f].mat != registro) {

            registro = vetFunc[f].mat;

        } else {

            printf("Error: Nao pode armazenar com mesma matricula!!");
            break;

        }
    
        system("@cls || clear");
        printf("\t\tO Funcionario %d foi cadastrado!\n", f+1);
    }
}

void CadsProduto() {
    
    system("@clear || clear");
    printf("\n\tCadastro dos produtos\n");
    int p;
    for (p = 0; p < 3; p++) {

        printf("\tNome: ");
        setbuf(stdin, NULL);
        fgets(vetProd[p].nome, sizeof(vetProd[p].nome), stdin);

        printf("\tQuantidade: ");
        scanf("%d", &vetProd[p].qtd);

        printf("\tPreco R$: ");
        scanf("%f", &vetProd[p].valor);

        if (vetProd[p].qtd <= 0 || vetProd[p].valor <= 0) {
             printf("\n\tErro: \n");
             printf("\t\tO produto nao pode ser registrado\n");
             printf("\t\tVelores abaixo do normal\n");
             setbuf(stdin, NULL);
             getchar();
             break;
        }

    system("@cls || clear");
    printf("\t\t Produto %d foi cadastrado!! \n", p+1);
    }

}

void MenuFunc() {
    
    int opcao;
    system("@cls || clear");
    printf("\n\t\t|-------------------------|");
    printf("\n\t\t|    1 - Realizar venda   |");
    printf("\n\t\t|    0 - Sair do sistema  |");
    printf("\n\t\t|-------------------------|");
    printf("\n\t\t     Opcao: ");
    scanf("%d", &opcao);
    printf("\n\t\t|-------------------------|\n");

    switch(opcao) {
        case 1:
            realizaVenda();
            break;
        default:
            exit(0);
            break;
    }
}

void realizaVenda() {
    printf("\n\t\tOs produtos: \n");    
    for (int p = 0; p < 3; p++) {
        printf("\t\t%d - %s", p+1, vetProd[p].nome);
    }
    
        int quant;
        char prodLocal[15];
        printf("\n\t\tDeseja levar qual?\n");
        printf("\t\tDigite o nome do produto: ");
        setbuf(stdin, NULL);
        fgets(prodLocal, sizeof(prodLocal), stdin);

    for (int i = 0; i < 3; i++) {
        if (strcmp(vetProd[i].nome, prodLocal) == 0) {
                printf("\n\t\tValor: R$ %.2f\n", vetProd[i].valor);
                printf("\n\t\tInforme a quantidade: ");
                scanf("%d", &quant);

                    if (quant <= vetProd[i].qtd) {
                        float total = (float)quant * vetProd[i].valor;
                        printf("\t\tTotal a pagar: R$ %.2f\n", total);
                        break;
                    } else {
                        printf("\t\tError: A quantidade acima do stock\n");
                    }
                setbuf(stdin, NULL);
                getchar();
        } 
    }

    setbuf(stdin, NULL);
    getchar();

}
