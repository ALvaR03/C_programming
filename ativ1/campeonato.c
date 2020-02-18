#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("clear");

	int idades[9], idadeMaior = 0, i;//variaveis

    // Entrada do usuario
    for (i = 0; i <= 9; i++)//estrutura de repeticao for
    {//chave
        printf("Digite o ano nasc da pessoa %d: ", i+1);//pedir para o usuario digitar
        scanf("%d", &idades[i]);//comanda para capturar os dados
    }//fecha chaves

    printf("\n\n");//pula linha
   
		for (i = 0; i <= 9; i++)//for para percorrer e analizar os dados
		{
		   idadeMaior = 2020 - idades[i];//processar as informacoes do array
		   if (idadeMaior >= 18)//condicao para amostrar 
		   {//mais uma chave para o if
			  printf("As pessoas maiores de idade sao: %d\n", idadeMaior);// exibir na tela o resultado dos dados
		   }//fechar as chaves
		}//chave de fechamento do for

	return 0;// padrao 
}
