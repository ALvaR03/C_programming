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
            
            printf("Login: ");
            fflush(stdin); //<--Limpar o buffer mas vc pode dar um espaco no %c pra funcionar
            gets(login);

            printf("Senha: ");
            fflush(stdin);
            gets(senha);

            system("cls");

            do
            {
                //printf("Login: %s", login);
                //printf("Senha: %s", senha);
                //Voce pode alterar o login e senha a qualquer momento por aqui ;D
                if (!strcmp(login, "admin")  && !strcmp(senha, "2023")) {
                    printf("    ** Bem-Vindo **     \n");
                } else {
                    printf("Usuario nao encontrado tente novamente!\n");
                    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
                }
            } while (!strcmp(login, "admin") && !strcmp(senha, "2023"));
            

            break;
        
        default:

            break;
        }

    return 0;
}