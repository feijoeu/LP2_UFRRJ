#include <stdio.h>

int main () {
    int vet0a9[10], vet10a19[10], vettotal[20];

    for (int i = 0; i != 10; i++) {
        vet0a9[i] = i;
        vet10a19[i] = i+10;
    }

    for (int i = 0; i != 10; i++) {
        vettotal[i] = vet0a9[i];
        vettotal[i+10] = vet10a19[i];
    }

    for (int i = 0; i != 20; i++) {
        printf(" %d ", vettotal[19-i]);
    }
}