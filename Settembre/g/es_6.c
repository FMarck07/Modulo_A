#include <stdio.h>
#include <stdlib.h>


/**
 * @brief Scambiare i valori contenuti nei due interi puntati dai parametri.
 *
 * @param n1 Puntatore al primo valore intero.
 * @param n2 Puntatore al secondo valore intero.
 *
 * @return La funzione non restituisce un valore; modifica direttamente i due interi.
 */
void Scambia(int *n1, int *n2){
    int n = *n1;
    *n1 = *n2;
    *n2 = n;
}

/**
 * @brief Dati due numeri si scriva in linguaggio C una funzione di tipo void denominata scambia, che dati in input 2 numeri li scambi.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Errore nel numero di argomenti\n");
        exit(0);
    }
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);

    if (n1 <= 0 || n2 <= 0) {
        printf("Errore: entrambi i numeri devono essere interi positivi (> 0).\n");
        return 1;
    }
    Scambia(&n1, &n2);
    printf("dopo lo scambio n1 vale: %d\n", n1);
    printf("dopo lo scambio n2 vale: %d\n", n2);

}