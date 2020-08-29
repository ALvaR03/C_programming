#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct _Endereco {
    char rua[50];
    int casa;
    char bairro[50];
} Endereco;

typedef struct _Contato {
    char telefone[11];
    char email[50];
    Endereco ender;
} Contato;

typedef struct _Funcionario {
    char nome[20];
    char cpf[15];
    char rg[15];
    char login[15];
    char senha[15];
    Contato ctt;
    Endereco ender;
} Funcionario;

typedef struct _Carro {
    char marca[10];
    char modelo[10];
    char placa[8];
    float valorDiaria;
} Carro;

typedef struct _Clientes {
    char nome[20];
    char cpf[15];
    char rg[15];
    float numCnh;
    Contato ctt;
    Endereco ender;
} Clientes;

void clrscr() { // Essa funcao so linha a tela
    system("@cls || clear");
}

void cadasFunc();




int main(void) {
    //system("@cls || clear");
    
    //Struct Arrays dos cadastros
    Clientes cadasClientes[2];
    int c;
    Funcionario arrayFuncionario[2];
    int f;
    Carro cadasCarro[2];
    int car;
   //... 

    //Variavel do programa
    int opsn = 0;

    int menuop, menuclien, menufunc;
    char login[50], senha[50];

    char diaHora;
    int quantDias;

    //Variavel de pesquisa
    char placaPesq[10], pPesq;
    int buscaClien;
    bool acesso;

    int continuar;

    //Variavel de carregamento
    int carregando, pesquisando;

        //Inicio
        printf("\t~ Tela inicial ~\n");
        printf("+====================================+\n");
        printf("Digite a senha para entrar no sistema!\n\n");

            
            do {
                printf("Login: ");
                setbuf(stdin, NULL); //<--Limpar o buffer mas vc pode dar um espaco no %c pra funcionar
                fgets(login, sizeof(login), stdin);

                printf("Senha: ");
                setbuf(stdin, NULL);
                fgets(senha, sizeof(senha), stdin);

                system("clear");

                //printf("A senha e : %s\n", senha);
                //Voce pode alterar o login e senha a qualquer momento por aqui ;D
                if ((!strcmp(login, "admin") && !strcmp(senha, "2023")) == 0) {
                    printf("    ** Bem-Vindo **     \n");
                } else {
                    printf("Cadastro invelido tente novamente!\n");
                    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                }
            } while ((strcmp(login, "admin") && strcmp(senha, "2023")) == 0);



                printf("|==============================|\n");
                printf("|   ** Menu de Cadastro **     |\n");
                printf("|==============================|\n");
                printf("( 1 ) - Cadastrar Funcionario   \n");
                printf("( 2 ) - Cadastrar Cliente        \n");
                printf("( 3 ) - Cadastrar Carro         \n");
                printf("( 4 ) - Exibir Relatorio        \n");
                printf("( 5 ) - Opcao para Cliente      \n");
                printf("|==============================|\n");
                printf("Opcao: ");
                //setbuf(stdin, NULL);
                scanf("%d", &menufunc);

                switch (menufunc) {
                case 1:     //Cadastro de clientes
                    //clrscr();
                    cadasFunc();

                case 2: //Cadastro de Funcionarios
                    clrscr();

                break;

                case 3: //Cadastro de carros

                break;
                case 5:
                    if (menufunc == 5) {
                        exit;
                    }
                break;
                
                default:
                    printf("Opcao desconhecida!!!!");
                    break;
                }
    return 0;
}

void cadasFunc() {
   printf("-- Cadastro de Funcionario --\n");
    /*
       for(c = 0; c < 2; c++) {
       printf("-- Cadastro de Clientes --\n");
       printf("Nome: ");
       fflush(stdin);
       fgets(cadasClientes[c].nome, 20, stdin);
       printf("CPF: ");
       scanf("%d", &cadasClientes[c].cpf);
       printf("Numero da CNH: ");
       scanf("%d", &cadasClientes[c].numCnh);
       printf("Telefone: ");
       scanf("%d", &cadasClientes[c].telefone);
       printf("Endereco (Rua, Casa e Bairro): ");
       fflush(stdin);
       scanf("%d", &cadasClientes[c].endereco);
       system("cls");


       printf("## O cliente foi cadastrados! ##\n");
       printf("Deseja continuar cadastrando? \n");
       printf("1 - Sim \n");
       printf("0 - Nao \n");
       printf("Opcao: ");
       fflush(stdin);
       scanf("%d", &opsn);
       system("cls");

           if (opsn == 1) { 
               continue;
            }
       } 
    
    break;
*/ 

}
