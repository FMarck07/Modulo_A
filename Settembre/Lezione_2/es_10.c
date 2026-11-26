#include <stdio.h>


/**
 * @brief Scrivere un programma C che legga da tastiera i valori interi di m e q come coefficienti dell’equazione di una retta (y=mx+q), e successivamente il valore di x, e restituisca il valore di y in quel punto. ESEMPIO DI ESECUZIONE m=3 q=2 x=5 y=17
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    int m, q, x, y;

    printf("m=");
    scanf("%d", &m);

    printf("q=");
    scanf("%d", &q);

    printf("x=");
    scanf("%d", &x);
    y = m*x+q;
    printf("y=%d", y);


    return 0;
}