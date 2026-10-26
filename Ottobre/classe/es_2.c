#include <stdio.h>

int main(void) {
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
