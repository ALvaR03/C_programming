#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("clear");
		
	int maior_menor [9]; // = {22, 3, 7, 8, 15, 9, 11, 7, 6, 4};
	int i, maior = 0, menor = 99999; //, maior = 0, menor = 99999;

    // Entrada do usuario
    for (i = 0; i <= 9; i++)
    {
        printf("Digite qualquer valor %d: ", i+1);
        scanf("%d", &maior_menor[i]);
    }
   
	    // Separar os maiores e menores
	    for (i = 0; i <= 9; i++)
	    {
		   if (maior_menor[i] > maior) {
			  maior = maior_menor[i];
		   }
		   if (maior_menor[i] < menor) {
			  menor = maior_menor[i];
		   }
	    }

    printf("\n\n");
    printf("O maior malor .:%d\ne o menor valor .:%d", maior, menor);
    printf("\n\n\n...........FIM.............\n");

    //getch();
    return 0;

}