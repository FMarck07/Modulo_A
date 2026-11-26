#include <stdio.h>


/**
 * @brief Determinare e stampare i divisori positivi del numero fornito.
 *
 * @param n Numero intero di cui cercare i divisori.
 *
 * @return La funzione non restituisce un valore.
 */
int divisori(int n){
    int somma_divisori = 0;
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0){
            somma_divisori += i;
        }
    }
    return somma_divisori;
}


/**
 * @brief Scrivere un programma in linguaggio C che stampi a video i numeri perfetti tra 1 e 10000. Un numero si dice perfetto se è uguale alla somma dei suoi divisori. Esempio: 28 = 1 + 2 + 4 + 7 + 14 è un numero perfetto. ESEMPIO DI ESECUZIONE (non completo) Stampa dei numeri perfetti tra 1 e 10000 6 28
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    
    printf("Stampa dei numeri perfetti tra 1 e 10000\n");

    for(int i = 1; i <= 10000; i++){
        if(divisori(i) == i){
            printf("%d\n", i);
        }
    }

    return 0;
}