#include <stdio.h>

/*Un consulente deve calcolare il numero di ore e minuti spesi lavorando per un cliente.
Egli ha lavorato in due distinte sessioni di lavoro, per ciascuna delle quali ha annotato il numero di ore e
il numero di minuti impiegati.
Si scriva un programma in C che, a partire dalle ore e minuti della prima sessione di lavoro e dalle ore e 
minuti della seconda sessione di lavoro, calcoli il numero di ore e minuti complessivi.

SUGGERIMENTO: Utilizzare operazioni di divisione e modulo (resto della divisione intera), ricordando che 1h=60m
. Prestare particolare attenzione al formato di output del risultato.

ESEMPIO DI ESECUZIONE

Minuti prima sessione:30
Ore prima sessione:2
Minuti seconda sessione:15
Ore seconda sessione:4
Tempo totale:6h45m
*/


int main(int argc, char *argv[]) {
    int ore_primo_giorno, minuti_primo_giorno, ore_secondo_giorno, minuti_secondo_giorno;

    do {
        printf("Minuti prima sessione:");
        scanf("%d", &minuti_primo_giorno);

        printf("Ore prima sessione:");
        scanf("%d", &ore_primo_giorno);

        printf("Minuti seconda sessione:");
        scanf("%d", &minuti_secondo_giorno);

        printf("Ore seconda sessione:");
        scanf("%d", &ore_secondo_giorno);

    } while (ore_primo_giorno < 0 || ore_secondo_giorno < 0 || 
             minuti_primo_giorno < 0 || minuti_primo_giorno >= 60 || 
             minuti_secondo_giorno < 0 || minuti_secondo_giorno >= 60);

    int ore_totali = ore_primo_giorno + ore_secondo_giorno;
    int minuti_totali = minuti_secondo_giorno + minuti_primo_giorno;

    if (minuti_totali >= 60) {
        ore_totali += minuti_totali / 60;
        minuti_totali = minuti_totali % 60;
    }

    printf("Tempo totale:%dh%dm\n", ore_totali, minuti_totali);

    return 0;
}
