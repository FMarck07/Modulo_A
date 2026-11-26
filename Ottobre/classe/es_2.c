#include <stdio.h>

/**
 * @brief Leggere i dati richiesti dall'esercizio, eseguire i calcoli e visualizzare il risultato.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    int size;

    printf("Quanti numeri vuoi inserire? ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Dimensione non valida.\n");
        return 1;
    }

    int numbers[size];
    int positives[size];
    int count = 0;

    printf("Inserisci i %d numeri:\n", size);
    for (int n = 0; n < size; n++) {
        printf("Elemento [%d]: ", n);
        scanf("%d", &numbers[n]);
    }

    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int n = 0; n < length; n++) {
        if (numbers[n] > 0) {
            positives[count++] = numbers[n];
        }
    }

    printf("\nElementi positivi copiati nel nuovo array (%d trovati):\n", count);
    for (int n = 0; n < count; n++) {
        printf("%d ", positives[n]);
    }
    printf("\n");

    return 0;
}