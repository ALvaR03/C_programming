#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Clientes {
    char nome[20];
    int cpf; 
    float numCnh;
    int telefone;
    char endereco[20];
};

struct Funcionario {
    char nome[20];
    int cpf;
    char login[15];
    char senha[15];
};

struct Carro {
    char marca[10];
    char modelo[10];
    char placa[8];
    int ano;
    char cor[10];
    float valorDiaria;
};

int main(void) {
    //system("@cls || clear");
    //Struct Arrays dos cadastros

    struct Clientes cadasClientes[2];
    int c;
    struct Funcionario cadasFuncionario[2];
    int f;
    struct Carro cadasCarro[2];
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
        printf("~ Menu Principal ~\n");
        printf("+================+\n");
        printf("1 - Funcionario\n");
        printf("2 - Cliente\n");
        printf("0 - Sair\n");
        printf("+================+\n");
        printf("Opcao: ");
        scanf("%d", &menuop);

        switch (menuop) {
        case 1:
            system("@cls || clear");
            
            do {
                printf("Login: ");
                fflush(stdin); //<--Limpar o buffer mas vc pode dar um espaco no %c pra funcionar
                fgets(login, 50, stdin);

                printf("Senha: ");
                fflush(stdin);
                fgets(senha, 50, stdin);

                system("clear");

                //Voce pode alterar o login e senha a qualquer momento por aqui ;D
                if (!strcmp(login, "admin")  && !strcmp(senha, "2023")) {
                    printf("    ** Bem-Vindo **     \n");
                } else {
                    printf("Usuario nao encontrado tente novamente!\n");
                    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                }
            } while ((!strcmp(login, "admin") && !strcmp(senha, "2023")) == false);


            while (!strcmp(login, "admin") && !strcmp(senha, "2023")) {

/*
                int carga = 0; //Carragamento para efeitos visuais
                while (carga <= 100) {
                    system("clear");
                    printf("Carregando!!\n %d %% \n", carga);
                    carga++;
                }
                system("clear");// Fim do carragamento inutil
*/

                printf("|==============================|\n");
                printf("|   ** Menu de Cadastro **     |\n");
                printf("|==============================|\n");
                printf("( 1 ) - Cadastrar Cliente       \n");
                printf("( 2 ) - Cadastrar Funcionario   \n");
                printf("( 3 ) - Cadastrar Carro         \n");
                printf("( 4 ) - Exibir Relatorio        \n");
                printf("( 5 ) - Opcao para Cliente      \n");
                printf("|==============================|\n");
                printf("Opcao: ");
                fflush(stdin);
                scanf("%d", &menufunc);

                switch (menufunc) {
                case 1:     //Cadastro de clientes
                    system("cls");

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
                

                case 2: //Cadastro de Funcionarios
                    system("cls");

                    for(f = 0; f < 2; f++) {
                        printf("-- Cadastro de Funcionarios --\n");
                        printf("Nome: ");
                        fflush(stdin);
                        fgets(cadasFuncionario[f].nome, 20, stdin);
                        printf("Cpf: ");
                        scanf("%d", &cadasFuncionario[f].cpf);
                        printf("Login: ");
                        fflush(stdin);
                        fgets(cadasFuncionario[f].login, 15, stdin);
                        printf("Senha: ");
                        fflush(stdin);
                        fgets(cadasFuncionario[f].senha, 15, stdin);
                        system("cls");

                        printf("## O funcionario foi cadastrados! ##\n");
                        printf("Deseja continuar cadastrando? \n");
                        printf("1 - Sim \n");
                        printf("0 - Nao \n");
                        printf("Opcao: ");
                        fflush(stdin);
                        scanf("%d", &opsn);
                        system("cls");

                            if (opsn != 1) { 
                                break;
                            }
                    }

                break;


                case 3: //Cadastro de carros
                system("cls");
                do {
                    for(car = 0; car < 2; car++) {
                        printf("-- Cadastro de Carros --\n");
                        printf("Marca: ");
                        fflush(stdin);
                        fgets(cadasCarro[car].marca, 10, stdin);
                        printf("Modelo: ");
                        fflush(stdin);
                        fgets(cadasCarro[car].modelo, 10, stdin);
                        printf("Placa: ");
                        fflush(stdin);
                        fgets(cadasCarro[car].placa, 8, stdin);
                        printf("Ano: ");
                        fflush(stdin);
                        scanf("%d", &cadasCarro[car].ano);
                        printf("Cor: ");
                        fflush(stdin);
                        fgets(cadasCarro[car].cor, 10, stdin);
                        printf("Valor da diaria: ");
                        fflush(stdin);
                        scanf("%f", &cadasCarro[car].valorDiaria);
                        system("cls");

                    }
                    car++;
                } while (car == 2);

                break;

                case 4: //Consultar carro cadastrado
                system("cls");
                acesso = true;

                    printf("Procurar por placa: ");
                    fflush(stdin);
                    gets(placaPesq);

                    for(car = 0; car < 2; car++) {
                        if(placaPesq == cadasCarro[car].placa) {
                            printf("Marca: %s", cadasCarro[car].marca);
                            printf("Modelo: %s", cadasCarro[car].modelo);
                            printf("Placa: %s", cadasCarro[car].placa);
                            printf("Ano: %d", cadasCarro[car].ano);
                            printf("Cor: %s", cadasCarro[car].cor);
                            printf("Valor da diaria: %.2f", cadasCarro[car].valorDiaria);
                            system("cls");
                        }
                    }

                    if(acesso == false) {
                        printf("");
                        printf("\nPlaca nao encontrada!!");
                    }

                    system("pause");

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
            }
            
            

            break;
        
        default:
            printf("\nObrigado e volte sempre!!\n");
            break;
        }

    return 0;
}
