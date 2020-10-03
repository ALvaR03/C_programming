#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declaracoa de registro 
typedef struct _Produto {
    char nome[15];
    int quant;
    float valor;
} Produto;

typedef struct _Autenticar {
    char login[20];
    int senha;
} Autenticar;

typedef struct _Funcionario {
    char nome[15];
    int mat;
    Autenticar autenFun;
} Funcionario;

typedef struct _ADM {
    Funcionario Func;
    Autenticar autenAdm;
} ADM;

//delcaracao de variaveis globais
Produto prod[2];
Funcionario func[2];
ADM admin;

//declaracao de procedimentos
void MenuAdm();
void CadFunc();
void CadProduto();
void GeraRelatorio();

void MenuFunc();
void Cadastrar();
void Pesquisar();

//funcao princiapal
int main(void) {

    Menu();

    return 0;
}//Fim main

void MenuAdm() {
    printf("O ADM esta online!!\n");
    int op;

    do {
        system("@cls || clear");
        printf("1-Cadastrar Funcionario\n");
        printf("2-Cadastrar Produto\n");
        printf("3-Gerar Relatorio\n");
        printf("0-Sair\n");
        scanf("%i", &op);
        switch(op) {
            case 1:
                CadFunc();
                break;
            case 2:
                //CadProduto();
                break;
            case 3:
                GeraRelatorio();
                break;
            case 0:
                exit(0);
                break;
            default: 
                printf("Opcao invalida!!\n");
        } //fim switch
    } while (op != 0);
}// fim menu

void Cadastrar() {
    
    for (int e = 0; e < 2; e++) {
        printf("Estado: ");
        setbuf(stdin, NULL);
        fgets(vetEstado[e].nome, sizeof(vetEstado[e].nome), stdin);
        printf("UF: ");
        setbuf(stdin, NULL);
        fgets(vetEstado[e].uf, sizeof(vetEstado[e].uf), stdin);
            //for para preencher municipio
            for (int m = 0; m < 3; m++) {
                //printf("Muncipio: ");
                setbuf(stdin, NULL);
                //fgets(vetEstado[e].municipio[m].nomeMunicipio, sizeof(vetEstado[e].municipio[m].nomeMunicipio), stdin);
                printf("Habitantes: ");
                setbuf(stdin, NULL);
                scanf("%f", &vetEstado[e].municipio[m].qntd);
            }// fim for municipio
    }//fim for

} // fim Cadastrar

void Pesquisar() {
    char nomepesq[3];
    float total;
    total = 0.0;

    //Entrada de dados para pesquisar
    printf("Nome para pequisa: \n");
    setbuf(stdin, NULL);
    fgets(nomepesq, sizeof(nomepesq), stdin);

    //for para procurar o registro no vetor
    for (int e = 0; e < 2; e++) {
        if(strcmp(vetEstado[e].nome, nomepesq) == 0 || strcmp(vetEstado[e].uf, nomepesq) == 0) {
            printf("Estado: %s\n", vetEstado[e].nome);
            printf("UF: %s\n", vetEstado[e].uf);
                for (int m = 0; m < 3; m++) { 
                    printf("Municipio: %s\n", vetEstado[e].municipio[m].nomeMunicipio);
                    printf("Habitantes: %f\n", vetEstado[e].municipio[m].qntd);
                    total += vetEstado[e].municipio[m].qntd;
                } //fim for municipio
                printf("Total Habitantes: %.2f\n", total);
        } // fim for estado
        getchar();
    } //fim for estado

    //pesquisar municipio
    for (int e = 0; e < 2; e++) {
        for (int m = 0; m < 3; m++) {
            if (strcmp(vetEstado[e].municipio[m].nomeMunicipio, nomepesq) == 0) {
                printf("Estado: %s\n", vetEstado[e].nome);
                printf("UF: %s\n", vetEstado[e].uf);
                printf("Municipio: %s\n", vetEstado[e].municipio[m].nomeMunicipio);
                printf("Habitantes: %.2f\n", vetEstado[e].municipio[m].qntd);
            }
        }
        getchar();
    }
} //fim pequisar

