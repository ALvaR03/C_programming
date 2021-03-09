#include <stdio.h>
#include <stdlib.h>

typedef struct _Ponto {
    float x;
    float y;
} Ponto;

int main(void) 
{

    Ponto *pt = (Ponto*) malloc(sizeof(Ponto));
    pt->x = 1;
    pt->y = 5;

    printf("Ponto = (%f, %f)", pt->x, pt->y);

    return 0;
}
