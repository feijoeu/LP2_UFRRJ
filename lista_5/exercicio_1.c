#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maiusculas (char *x) {
    int i = 0;

    if (*x >= 97 && *x <= 122 )
    {
        *x -= 32;
    }
}

int concatena (char *x, char *y) {
    // Não entendi.
}

int capitaliza (char *x) {  
    int i = 0;

    /* if (x[0] >= 97 && x[0] <= 122) {
        *x -= 32;
    } 
    
    Essa parte do código não está funcionando, está tornando todas as vogais maiúsculas. */

    if (x[(i-1)] == 32 && x[i] >= 97 && x[i] <= 122) 
    {
        *x -= 32;
    }
}

int compara (char *x, char *y) {
    int tamx, tamy, r;

    tamx = strlen(x);
    tamy = strlen(y);

    if (tamx < tamy) 
    {   
        r = -1;
        return r;
    } else if (tamx == tamy) 
    {
        r = 0;
        return r;
    } else 
    {    
        r = 1;
        return r;
    }
}

int main () {
    char FRASE1[30], FRASE2[30];
    int contador = 0, kmain = 0;

    printf("Digite uma frase de ate 30 caracteres:\n");
    gets(FRASE1);
    printf("Digite mais uma frase de ate 30 caracteres:\n");
    gets(FRASE2);

    // item a da lista.
    printf("\n1.a. = ");
    while (FRASE1[contador] != '\0')
    {
        maiusculas(&FRASE1[contador]);

        printf("%c", FRASE1[contador]);
        contador++;
    }

    // item b da lista (pendente).

    // item c da lista.
    contador = 0;
    printf("\n\n1.c. = ");
    while (FRASE2[contador] != '\0')
    {
        capitaliza(&FRASE2[contador]);

        printf("%c", FRASE2[contador]);
        contador++;
    }
    printf("\nA quantidade de caracteres da string e: %d", contador);

    // item d da lista.
    contador = 0;
    kmain = compara(FRASE1, FRASE2);
    printf("\n\n1.d: %d", kmain);
}

// Utilizar esse while nos outros programas.