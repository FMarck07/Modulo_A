#include <stdio.h>

// Funzione che cerca un elemento nel vettore.
// Ritorna l'indice se trovato, altrimenti -1.
int cercaElemento(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Elemento trovato: restituisce l'indice
        }
    }
    return -1; // Elemento non presente
}

int main(void) {
    // Vettore precedentemente popolato
    int numbers[] = {14, 5, 29, 81, 42, 3, 90, 17};

    // Calcolo del numero di elementi con sizeof
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target;
    printf("Inserisci il numero da cercare: ");
    if (scanf("%d", &target) != 1) {
        printf("Input non valido.\n");
        return 1;
    }

    int index = cercaElemento(numbers, size, target);

    if (index != -1) {
        printf("Numero %d trovato all'indice: %d\n", target, index);
    } else {
        printf("Numero %d non trovato.\n", target);
    }

    return 0;
}
