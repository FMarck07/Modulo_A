#include <stdio.h>

/*Scrivere un programma in C che chieda all'utente di inserire da tastiera un numero
intero di tre cifre (ad esempio 472) e che stampi separatamente la cifra delle centinaia, 
quella delle decine e quella delle unità. Non è richiesto alcun controllo sul valore inserito: 
si assume che l'utente digiti sempre un numero corretto, compreso tra 100 e 999. ù
Il numero deve essere letto come intero e le cifre devono essere ricavate esclusivamente con operazioni aritmetiche.

SUGGERIMENTO: ogni numero di tre cifre si può scrivere come n=100⋅centinaia+10⋅decine+1⋅unità.
Per isolare le singole cifre, utilizzare la divisione intera (/) e l'operatore modulo (%), 
che restituisce il resto della divisione intera. Prestare molta attenzione alla formattazione 
dell'output per la scomposizione del numero.

ESEMPIO DI ESECUZIONE

Numero:145
Scomposto:1h4da5u*/


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
