#include <stdio.h>
#include <string.h>


#define MAX 10

/**
 * @brief Calcolare minimo, massimo e media degli elementi di un array.
 *
 * @param arr Array di numeri interi da analizzare.
 * @param dim Numero di elementi dell'array.
 * @param min Puntatore alla variabile che riceverà il minimo.
 * @param max Puntatore alla variabile che riceverà il massimo.
 * @param media Puntatore alla variabile che riceverà la media.
 *
 * @return La funzione non restituisce un valore; aggiorna direttamente minimo, massimo e media.
 */
void valori(int *arr, int dim, int *min, int *max, float *media){
    *min = *arr;
    *max = *arr;
    int somma = 0;
    for(int i = 0; i < dim; i++){
        if(*min > *(arr + i)) {
            *min = *(arr + i);
        }
        if(*max < *(arr + i)){
            *max = *(arr + i);
        }
        somma += *(arr + i);
    }
    *media = (float)somma / dim;
}

/**
 * @brief Scrivi una funzione in C che riceve un array di interi e la sua dimensione, e trova contemporaneamente il valore minimo, il valore massimo e la media degli elementi. Poiché in C una funzione può restituire un solo valore con return, dovrai usare i puntatori per "restituire" tutti e tre i risultati direttamente alle variabili dichiarate nel main.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int array[MAX], temp, l = 0, min, max;
    float media = 0;
    printf("Inserisci gli elementi dell'array\n");
    printf("Termina quando inserisci 0\n");
    scanf("%d", &temp);
    while(l < MAX && temp != 0){
        array[l] = temp;
        l++;
        if(l < MAX){
            scanf("%d", &temp);
        }
    }
    
    if (l > 0) {
        valori(array, l, &min, &max, &media);
        printf("Minimo: %d\n", min);
        printf("Massimo: %d\n", max);
        printf("Media: %.2f\n", media);
    } else {
        printf("Nessun numero valido inserito.\n");
    }
}