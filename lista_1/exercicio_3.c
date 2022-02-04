#include <stdio.h>

int main () {
    int num_ast, contador1, contador2, a;

    printf("Escreva o numero de fileiras de asteriscos: ");
    scanf("%d", &num_ast);
    contador1 = 0;
    contador2 = 1;

    while (contador1 < num_ast) {
        a = 0;

        while (a < contador2) {
            printf("*");
            a++;
        }

        printf("\n");
        contador2 += 2;
        contador1++;        
    }
}