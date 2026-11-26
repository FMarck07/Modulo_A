#include <stdio.h>


#define DIM 10

/**
 * @brief Si scriva un programma C che: legga da tastiera 10 elementi interi e li inserisca in un array opportuno; successivamente, si scorra il vettore e si stampi a video il numero di elementi pari e quello di elementi dispari presenti. ESEMPIO DI ESECUZIONE: Inserisci un numero: 3 Inserisci un numero: 4 Inserisci un numero: 5 Inserisci un numero: 8 Inserisci un numero: 2 Inserisci un numero: 2 Inserisci un numero: 9 Inserisci un numero: 12 Inserisci un numero: 23 Inserisci un numero: 7 Pari: 5 Dispari:
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    int numbers[DIM], p = 0, d = 0;

    
    for(int i = 0; i <  DIM; i++){
        printf("Inserisci un numero: \n");
        scanf("%d", &numbers[i]);
    }
    for(int i = 0; i <  DIM; i++){
        if(numbers[i] % 2 == 0)
            p++;
        else d++;
    }

    printf("Pari: %d\n", p);
    printf("Dispari: %d", d);


    return 0;
}
