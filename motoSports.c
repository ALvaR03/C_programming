#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    system("cls");
    //Struct Arrays dos cadastros
   //... 

    //Variavel do programa
    int opsn;

    int menuop, menuclien, menufunc;
    char login[50], senha[50];

    char diaHora;
    int quantDias;

    //Variavel de pesquisa
    char placaPesq, pPesq;
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
            system("cls"); 
            
            do {
                printf("Login: ");
                fflush(stdin); //<--Limpar o buffer mas vc pode dar um espaco no %c pra funcionar
                gets(login);

                printf("Senha: ");
                fflush(stdin);
                gets(senha);

                system("cls");

                //Voce pode alterar o login e senha a qualquer momento por aqui ;D
                if (!strcmp(login, "admin")  && !strcmp(senha, "2023")) {
                    printf("    ** Bem-Vindo **     \n");
                } else {
                    printf("Usuario nao encontrado tente novamente!\n");
                    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                }
            } while ((!strcmp(login, "admin") && !strcmp(senha, "2023")) == false);


            while (!strcmp(login, "admin") && !strcmp(senha, "2023")) {

                int carga = 0; //Carragamento para efeitos visuais
                while (carga <= 100) {
                    system("cls");
                    printf("Carregando!!\n %d %% \n", carga);
                    carga++;
                }
                system("cls");// Fim do carragamento inutil

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
                scanf("%i", &menufunc);
                fflush(stdin);
                system("cls");

                switch (menufunc) {
                case 1:     //Cadastro de clientes
                    /* code */
                    break;
                
                default:

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