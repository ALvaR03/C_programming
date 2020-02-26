#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, maior=0, menor=0;
    float Notas[10];
    
    printf("digite 10 notas");
    printf("\n");
    for (a=0;a<10;a++)
    {
    printf("nota %d : \n", a+1);
    scanf("%f", &Notas[a]);
    }

        
        for(a=0;a<10;a++){
            if(Notas[a]>maior){
                maior=Notas[a];
            }
        }
     printf("o maior valor é %d", maior);
     
         for(a=0;a<10;a++){
                if(Notas[a]<menor){
                menor=Notas[a];
            }
        }
     printf("\n e o menor valor é %d", menor);

    

return 0;
} 
