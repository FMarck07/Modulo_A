/*In un sondaggio ci sono tre possibili risposte: "sì", "no", "non so". Progettare un programma in
linguaggio C che legge da tastiera tre interi, che corrispondono al numero di volte in cui è stata data
ciascuna delle tre risposte,e stampa a video le relative percentuali (arrotondate all’intero inferiore o
uguale).
Più precisamente:
● Legge il numero di "sì", "no", "non so";
● Stampa il numero totale di risposte ottenute;
● Stampa le percentuali di "sì", "no", “non so”

Risposte "si":5
Risposte "no":7
Risposte "non so":2
Totale:14
Percentuale "si":35%
Percentuale "no":50%
Percentuale "non so":14%*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int s, n, b;
    float per_s;
    printf("Risposte \"si\":");
    scanf("%d", &s);
    printf("Risposte \"no\":");
    scanf("%d", &n);

    printf("Risposte \"non so\":");
    scanf("%d", &b);

    int somma = s + n + b;

    per_s = ((float)s/somma) * 100.0f;
    printf("Percentuale \"si\": %.2f ", per_s);

    per_s = ((float)n/somma) * 100.0f;
    printf("\nPercentuale \"no\": %.2f ", per_s);

    per_s = ((float)b/somma) * 100.0f;
    printf("\nPercentuale \"non so\": %.2f ", per_s);

    return 0;
}