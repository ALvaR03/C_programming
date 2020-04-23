#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("clear");

	int idades[9], idadeMaior = 0, i, n;//variaveis
	char nomes[4][15];

    // Entrada do usuario
    for (i = 0; i <= 9; i++)//estrutura de repeticao for
    {//chave
	
        printf("Digite o nome: ");
	   scanf("%s", nomes[i]);
        printf("Digite o ano nasc da pessoa:");
        scanf("%d", &idades[i]);
        printf("\n");
    }//fecha chaves

    printf("\n\n");//pula linha
   
		for (i = 0; i <= 9; i++)//for para percorrer e analizar os dados
		{
		   idadeMaior = 2020 - idades[i];//processar as informacoes do array
		   if (idadeMaior >= 18) {
			idadeMaior = idades[i];
			printf("A pessoa meior de idade e: %s\n", nomes[i]);
			printf("E sua idade e: %d\n", idadeMaior);
			printf("\n");//pula linha
		   }//fechar as chaves
		}//chave de fechamento do for

	return 0; 
}
