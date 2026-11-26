#include <stdio.h>


#define DIM 10

/**
 * @brief Cercare tutte le occorrenze del numero target nell'array e memorizzarne gli indici.
 *
 * @param numbers Array di interi in cui effettuare la ricerca.
 * @param index Array in cui memorizzare gli indici delle occorrenze.
 * @param target Numero intero da cercare nell'array.
 *
 * @return Restituisce il numero di occorrenze trovate.
 */
int cerca(int numbers[], int *index, int target){
    int count = 0;
    for(int i = 0; i < DIM; i++){
        if(numbers[i] == target){
            index[count] = i;
            count++;
        }
    }
    return count;
}


/**
 * @brief Si legga da tastiera un array di 10 elementi di tipo int. Si legga da tastiera un intero x. Si cerchi se esiste l'elemento x nell'array: se è presente si visualizzano tutti gli indici in cui l'elemento compare, si stampi quante volte è stato trovato l'elemento, altrimenti si informi l'utente che l'elemento non è presente.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
    int numbers[DIM], index[DIM], target, n;

    for(int i = 0; i <  DIM; i++){
        printf("Inserisci elemento: \n");
        scanf("%d", &numbers[i]);
    }
    printf("Inserisci x: \n");
    scanf("%d", &target);
    n = cerca(numbers, index, target);

    if(n == 0){
        printf("%d non presente\n", target);
    }else{
        for(int i = 0; i < n; i++){
            printf("x in posizione %d\n", index[i]);
        }
        if (n == 1) {
            printf("%d compare 1 volta\n", target);
        } else {
            printf("%d compare %d volte\n", target, n);
        }
    }

    
    
    return 0;
}