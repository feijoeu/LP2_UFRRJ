#include <stdio.h>
#include <math.h>

int main () {
    float x, senx; 
    int fatorpos, fatorneg, contadorpos, contadorneg, contador, fatorial;
    senx=0;
    fatorpos=1;
    fatorneg=3;
    contadorpos=27;
    contadorneg=29;
    contador=0;

    printf("Digite o numero que deseja calcular o seno: ");
    scanf("%f", &x);
    
    while (contador<10) {
        while (fatorpos <= contadorpos) {
            senx = senx+(pow(x, fatorpos)/fatorpos);
            fatorpos = fatorpos+4;
        }
        while (fatorneg <= contadorneg) {
            senx = senx-(pow(x, fatorneg)/fatorneg);
            fatorneg = fatorneg+4;
        }

        /* Ainda falta implementar o denominador fatorial.
        
        Usar a ideia de colocar a equação sendo multiplicada por (-1)^i  */

        contadorpos = contadorpos+4;
        contadorneg = contadorneg+4;
        contador++;
        printf("%.4f\n", senx);
    }
}