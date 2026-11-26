#include <stdio.h>


/**
 * @brief Scrivere un programma in C che chieda all'utente di inserire da tastiera un numero intero di tre cifre (ad esempio 472) e che stampi separatamente la cifra delle centinaia, quella delle decine e quella delle unità. Non è richiesto alcun controllo sul valore inserito: si assume che l'utente digiti sempre un numero corretto, compreso tra 100 e 999. ù Il numero deve essere letto come intero e le cifre devono essere ricavate esclusivamente con operazioni aritmetiche. SUGGERIMENTO: ogni numero di t
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    int numero, h, da, u;

    printf("Numero:");
    scanf("%d", &numero);

    h = numero/100;
    numero %=  100;
    da = numero/10;
    numero %= 10;
    u = numero/1;

    printf("Scomposto:%dh%dda%du", h, da, u);


    return 0;
}