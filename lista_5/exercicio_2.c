#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zeraPares (int *x) {

    if ((*x)%2 == 0)
    { 
        *x = 0;
    }
}

int dobra (int *x) {

    *x = 2*(*x);
}

int soma (int *x, int *y) {
    *x += *y;
}

int main () {
    int lista1[30], lista2[30], K;

    // item a.
    printf("Item a: ");
    for (int i = 0; i <= 30; i++)
    {
        lista1[i] = i;
    }
    
    for (int i = 0; i <= 30; i++)
    {
        zeraPares (&lista1[i]);
        printf("%d ", lista1[i]);
    }

    // item b.
    printf("\nItem b: ");
    for (int i = 0; i <= 30; i++)
    {
        lista1[i] = i;
    }
    
    for (int i = 0; i <= 30; i++)
    {
        dobra (&lista1[i]);
        printf("%d ", lista1[i]);
    }

    //item c.
    printf("\nItem c: ");
    for (int i = 0; i <= 30; i++)
    {
        lista1[i] = i;
        lista2[i] = i;   
    }
    
    for (int i = 0; i <= 30; i++)
    {
        soma (&lista1[i], &lista2[i]);
        printf("%d ", lista1[i]);
    }
}

// Colocar os controles de loop dentro das funções.