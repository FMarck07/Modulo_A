#include <stdio.h>

int main(int argc, char *argv[]) {
    int voto;

    do {
        printf("Inserisci il voto: ");
        scanf("%d", &voto);
    } while (voto < 1 || voto > 30);

    return 0;
}