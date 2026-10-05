/*Scrivere un programma che, dati i due cateti di un triangolo rettangolo,
calcoli il valore del quadrato dell’ipotenusa.
SUGGERIMENTO: Notate che non è richiesto di calcolare la lunghezza dell’ipotenusa, 
ma solo il suo quadrato, per cui non è necessario usare la radice quadrata.

ESEMPIO DI ESECUZIONE

Primo cateto:3
Secondo cateto:4
Ipotenusa al quadrato:25*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float cateto1, cateto2;
    float ipotenusa_quadrato;

    printf("Primo cateto:");
    scanf("%f", &cateto1);

    printf("Secondo cateto:");
    scanf("%f", &cateto2);

    ipotenusa_quadrato = (pow(cateto1, 2) + pow(cateto2, 2));

    if (ipotenusa_quadrato == (int)ipotenusa_quadrato) {
        printf("Ipotenusa al quadrato:%.0f\n", ipotenusa_quadrato);
    } else {
        printf("Ipotenusa al quadrato:%.2f\n", ipotenusa_quadrato);
    }

    return 0;
}