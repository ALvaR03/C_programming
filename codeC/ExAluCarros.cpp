#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//declaracao de registros
typedef struct Login {
	char login[12];
	int senha;
}Login;

typedef struct Contato{
	char telefone[12];
	char email[20];
}Contato;

typedef struct Endereco{
	char rua[12];
	char bairro[15];
	char casa[12];
}Endereco;

typedef struct Funcionario{
	char nome[15];
	char cpf[16];
	char rg[12];
	Login login;
	Contato cont;
	Endereco end;
}Funcionario;

typedef struct Cliente{
	char nome[15];
	char cpf[16];
	char rg[12];
	int cnh;
	Contato cont;
	Endereco end;
}Cliente;

typedef struct Carro{
	char marca[10];
	char modelo[10];
	char placa[10];
	float vd;
	char status[10];
}Carro;

int main() {
    Login aux, login;
    Funcionario vetfunc[3];
    Carro vetcar[3];
    Cliente vetcli[3];

    int opL, opF;	
    //inicializando ADM
    strcpy(aux.login, "ADM\n");//comando para atribuicao de estring 
    aux.senha = 123;
	//___________________________________________________________
	
		do{
			system("@cls || clear");
			printf("Login: ");
			setbuf(stdin, NULL);
			fgets(login.login, sizeof(login.login), stdin);
			printf("Senha: ");
			scanf("%i", &login.senha);
		
			if((strcmp(login.login, aux.login) == 0) && (login.senha == aux.senha)){
			 
				 printf("Bem vindo Administrador\n");
				 printf("Cadastre o funcionario para acesso\n");
			 
				 for(int i = 0; i < 3; i++){
					 system("@cls || clear");
					 
					 printf("Dados Pessoais____________________________\n\n");
					 printf("Nome: ");
					 setbuf(stdin, NULL);
					 fgets(vetfunc[i].nome, sizeof(vetfunc[i].nome), stdin);
					 
					 printf("Cpf: ");
					 setbuf(stdin, NULL);
					 fgets(vetfunc[i].cpf, sizeof(vetfunc[i].cpf), stdin);
					 
					 printf("RG: ");
					 setbuf(stdin, NULL);
					 fgets(vetfunc[i].rg, sizeof(vetfunc[i].rg), stdin);
					 
					 printf("\nEndereco__________________________________\n\n");
					 printf("Bairro: ");
					 setbuf(stdin, NULL);
					 fgets(vetfunc[i].end.bairro, sizeof(vetfunc[i].end.bairro), stdin);
					 
					 printf("Rua: ");
					 setbuf(stdin, NULL);
					 fgets(vetfunc[i].end.rua, sizeof(vetfunc[i].end.rua), stdin);
					 
					 printf("Casa: ");
					 setbuf(stdin, NULL);
					 fgets(vetfunc[i].end.casa, sizeof(vetfunc[i].end.rua), stdin);
					 
					 printf("\nContato____________________________________\n\n");
					 printf("Telefone: ");
					 setbuf(stdin, NULL);
					 fgets(vetfunc[i].cont.telefone, sizeof(vetfunc[i].cont.telefone), stdin);
					 
					 printf("Email: ");
					 setbuf(stdin, NULL);
					 fgets(vetfunc[i].cont.email, sizeof(vetfunc[i].cont.email), stdin);
					 
					 printf("\nDados de acesso____________________________________ \n\n");
					 printf("Login: ");
					 setbuf(stdin, NULL);
					 fgets(vetfunc[i].login.login, sizeof(vetfunc[i].login.login), stdin);
					 
					 printf("Senha: ");
					 scanf("%i",&vetfunc[i].login.senha); 
				 }//fim for para preencher cadastro dos funcionarios
			  
			}//fim condicao de acesso(LOGIN) do administrador
		
		//logica para acesso do funcionario
		for(int i = 0; i < 3; i++){
			if((strcmp(login.login, vetfunc[i].login.login) == 0) && (login.senha == vetfunc[i].login.senha)){
			do {
				printf("\t\tBem vindo Funcionario: %s \n", vetfunc[i].nome);
			  	printf("1-Cadastrar Carro\n");
			  	printf("2-Cadastrar Cliente\n");
			  	printf("3-Realizar aluguel Carro\n");
			  	printf("4-Devolucao Carro\n");
			  	printf("0-Sair\n");
			  	scanf("%i", &opF);
				switch(opF){
                    case 1:
                        for(int i = 0; i < 3; i++){
                            printf("Marca: ");
                            setbuf(stdin, NULL);	
                            fgets(vetcar[i].marca, sizeof(vetcar[i].marca), stdin);

                            printf("Modelo: ");
                            setbuf(stdin, NULL);
                            fgets(vetcar[i].modelo, sizeof(vetcar[i].modelo), stdin);

                            printf("Placa: ");
                            setbuf(stdin, NULL);
                            fgets(vetcar[i].placa, sizeof(vetcar[i].placa), stdin);

                            printf("Valor da diaria: ");
                            scanf("%f", &vetcar[i].vd);
                         
                         strcpy(vetcar[i].status,"livre");
                        }//fim for cadastro dos carros	
                        break;//fim case 1	
                    case 2:
                        for(int i = 0; i < 3; i++){
                            printf("Nome: ");
                            setbuf(stdin, NULL);
                            fgets(vetcli[i].nome, sizeof(vetcli[i].nome), stdin);

                            printf("Cpf: ");
                            setbuf(stdin, NULL);
                            fgets(vetcli[i].cpf, sizeof(vetcli[i].cpf), stdin);

                            printf("Rg: ");
                            setbuf(stdin, NULL);
                            fgets(vetcli[i].rg, sizeof(vetcli[i].rg), stdin);

                            printf("CNH: ");
                            scanf("%i", &vetcli[i].cnh);

                            //cadastrar contato e endereco	

                        }//fim for cadastro dos clientes	

                        break;//fim case 2	
                    case 3 :

                        char cpfpesq[16];//variavel auxiliar para comparar cpf
                        int es, diaria, achou;
                        float vt;
                        achou = 0;

                        printf("Digite Cpf para consulta: ");
                        setbuf(stdin, NULL);
                        fgets(cpfpesq, sizeof(cpfpesq), stdin);

                        for(int c = 0; c < 3; c++){
                            if(strcmp(vetcli[c].cpf, cpfpesq) == 0){
                                achou = 1;

                                //exibir os carros
                                for(int car = 0; car < 3; car++){
                                    if(strcmp(vetcar[car].status, "livre") == 0){

                                        printf("%i - Modelo:%s \t", car,vetcar[car].modelo);
                                        printf("Marca:%s \t", vetcar[car].marca);
                                        printf("Valor:%.2f \n", vetcar[car].vd);
                                    }//fim if
                                }//fim for lista de carros   

                                printf("Escolha o carro desejado:\n");
                                scanf("%d", &es);

                                printf("Escolha o numero de diaria\n");
                                scanf("%d", &diaria);


                                vt = vetcar[es].vd * diaria;
                                printf("Total do aluguel: %.2f \n", vt);
                                strcpy(vetcar[es].status, "alugado");   

                            }//fim if comparacao dos clientes
                        }//fim for comparacao dos clientes

                        if(achou == 0){
                            printf("Cliente nao cadastrado\n");	
                        }

                        break;//fim case 3	
				
				case 4 :
					break;	
				case 0:
					opF=0;
					break;	
				default:
					printf("Opcao invalida\n");
				}//fim switch
				}while(opF!=0);//fim loop menu funcionario
		  	
		  }//fim if da condicao do funcionario
		}//fim for para condicao de acesso funcionario
		
				
		
		
		  printf("Desejar continuar no Sistema\n");
		  printf("\n 1-Sim\n 0-Nao\n");
		  scanf("%i",&opL);	
		  if(opL==0){
		  	exit(0);
		  }
		}while(opL != 0);
	
    return 0;	
}//fim da main


