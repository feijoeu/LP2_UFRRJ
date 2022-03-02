#include <stdio.h>

int main () {
    char frase[100];
    int cont = 1;

    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin); // Professora, como funciona essa leitura? vi num site mas não entendi de fato.

    for (int i = 0; i < 100; i++) 
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') 
        {
            for (int j = 0; j < cont; j++) 
            {
                printf("%c", frase[i]);
            }
            cont++;
        }
        printf("%c", frase[i]);
    }
}

// Professora, na impressão final estão saindo alguns caracteres indesejados depois de imprimir a frase. Qual o motivo?