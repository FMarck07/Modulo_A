#include <stdio.h>

int cercaElemento(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

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

int main(void) {
    int numbers[] = {14, 500, 29, 81, 42, 3, 90, -70, -900};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target;
    printf("Inserisci il numero da cercare: ");
    if (scanf("%d", &target) != 1) {
        printf("Input non valido.\n");
        return 1;
    }

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