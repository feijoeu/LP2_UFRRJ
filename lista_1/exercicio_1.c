#include <stdio.h>

int main () {

    int numero, contador, soma, maiornum, menornum;
    float media;

    printf("Digite o numero: ");
    scanf("%d", &numero);
    maiornum = numero;
    menornum = numero;
    soma = numero;
    contador = 1;

    while (numero != 999) {
        printf("Digite o numero: ");
        scanf("%d", &numero);
        contador++;
        soma = soma+numero;

        if (numero > maiornum) {
            maiornum = numero;
        }

        if (numero < menornum) {
            menornum = numero;
        }
    }

    media = soma/contador;
    printf("A quantidade de numeros lidos e: %d\n", contador);
    printf("A media entre eles e: %.2f\n", media);
    printf("O maior entre eles e: %d\nE o menor e: %d", maiornum, menornum);
}