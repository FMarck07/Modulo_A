#include <stdio.h>

void controllo_numero_compreso(int low, int high, int *numero){
    do{
        printf("Inserisci un numero compreso tra %d e %d: ", low, high);
        scanf("%d", numero);
    }while(*numero < 0 || *numero > 10);
}

int main() {
    int numero;
    controllo_numero_compreso(0, 10, &numero);
    printf("Numero: %d", numero);
}