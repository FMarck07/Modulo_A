#include <stdio.h>

/**
 * @brief Cercare la prima occorrenza del valore target in un array.
 *
 * @param arr Array in cui effettuare la ricerca.
 * @param size Numero di elementi dell'array.
 * @param target Numero intero da cercare nell'array.
 *
 * @return Restituisce l'indice della prima occorrenza oppure -1 se il valore non è presente.
 */
int cercaElemento(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

/**
 * @brief Determinare il valore massimo contenuto in un array.
 *
 * @param arr Array di numeri interi da esaminare.
 * @param size Numero di elementi dell'array.
 *
 * @return Restituisce il valore massimo oppure -1 se l'array è vuoto.
 */
int trovaMassimo(const int arr[], int size) {
    if (size <= 0) {
        return -1;
    }
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

/**
 * @brief Leggere i dati richiesti dall'esercizio, eseguire i calcoli e visualizzare il risultato.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    int numbers[] = {14, 500, 29, 81, 42, 3, 90, -70, -900};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target;
    printf("Inserisci il numero da cercare: ");
    scanf("%d", &target);

    int index = cercaElemento(numbers, size, target);
    int max = trovaMassimo(numbers, size);

    if (index != -1) {
        printf("Numero %d trovato all'indice: %d\n", target, index);
    } else {
        printf("Numero %d non trovato.\n", target);
    }

    printf("Massimo: %d\n", max);

    return 0;
}