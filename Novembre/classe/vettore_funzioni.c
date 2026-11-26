#include <stdio.h>

#define MAX 10

/**
 * @brief Leggere una sequenza di interi da tastiera fino allo zero o al raggiungimento del limite.
 *
 * @param vettore Array in cui memorizzare gli elementi letti.
 * @param dim Puntatore alla variabile che riceverà il numero di elementi letti.
 *
 * @return La funzione non restituisce un valore; aggiorna vettore e dim.
 */
void lettura(int vettore[], int *dim){
    printf("Inserisci gli elementi del vettore (0 per terminare):\n");
    int i = 0, temp;
    
    while(i < MAX && scanf("%d", &temp) == 1 && temp != 0){
        vettore[i] = temp;
        i++;
    }
    *dim = i;
}


/**
 * @brief Trovare l'indice dell'elemento massimo di un vettore.
 *
 * @param vettore Array dei valori da esaminare.
 * @param dim Numero di elementi presenti nel vettore.
 * @param index Puntatore alla variabile che riceverà l'indice del massimo.
 *
 * @return La funzione non restituisce un valore; aggiorna direttamente index.
 */
void iMax(int vettore[], int dim, int *index){
    int max = vettore[0];
    *index = 0;
    for(int i = 0; i < dim; i++){
        if(vettore[i] > max){
            max = vettore[i];
            *index = i;
        }
    }
}


/**
 * @brief Leggere i dati richiesti dall'esercizio, eseguire i calcoli e visualizzare il risultato.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int vettore[MAX], dim, target, index;
    lettura(vettore, &dim);
    if (dim > 0) {
        iMax(vettore, dim, &index);
        printf("Indice del max: %d\n", index);
        printf("Valore max: %d\n", vettore[index]);
    } else {
        printf("Il vettore e' vuoto.\n");
    }
}