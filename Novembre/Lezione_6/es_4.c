#include <stdio.h>


#define DIM 10

/**
 * @brief Verificare una condizione sui dati forniti alla funzione.
 *
 * @param vettore Valore utilizzato dalla funzione nell'elaborazione.
 *
 * @return Restituisce il risultato della verifica.
 */
int controllo(int vettore[]){
    for(int i = 0; i<DIM - 1; i++){
        if(vettore[i] >= vettore[i+1]){
            return 0;
        }
    }
    return 1;
}

/**
 * @brief Si scriva un programma C che: Legga da tastiera 10 elementi interi e li inserisca in un vettore di dimensione opportuna utilizzando la definizione di costante per la dimensione del vettore; verifichi se la sequenza è ordinata in ordine strettamente crescente e stampi a video il risultato
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    int vettore[DIM];
    printf("Inserisci 10 numeri:\n");
    for(int i = 0; i<DIM; i++){
        scanf("%d", &vettore[i]);
    }
    if(controllo(vettore)){
        printf("CRESCENTE");
    }else printf("NON CRESCENTE");
}