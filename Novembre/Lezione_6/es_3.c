#include <stdio.h>

/*Si legga da tastiera un array di 10 elementi di tipo int.
Si legga da tastiera un intero x.
Si cerchi se esiste l'elemento x nell'array: se è presente si visualizzano tutti gli indici in cui l'elemento compare, si stampi quante volte è stato trovato l'elemento, altrimenti si informi l'utente che l'elemento non è presente.

ESEMPI DI ESECUZIONE:

Inserisci elemento: 10
Inserisci elemento: 1
Inserisci elemento: 3
Inserisci elemento: 6
Inserisci elemento: 7
Inserisci elemento: 7
Inserisci elemento: 9
Inserisci elemento: 12
Inserisci elemento: 23
Inserisci elemento: 7
Inserisci x: 7
x in posizione 4
x in posizione 5
x in posizione 9
7 compare 3 volte
Inserisci elemento: 10
Inserisci elemento: 1
Inserisci elemento: 3
Inserisci elemento: 6
Inserisci elemento: 7
Inserisci elemento: 7
Inserisci elemento: 9
Inserisci elemento: 12
Inserisci elemento: 23
Inserisci elemento: 7
Inserisci x: 6
x in posizione 3
6 compare 1 volta
Inserisci elemento: 10
Inserisci elemento: 1
Inserisci elemento: 3
Inserisci elemento: 6
Inserisci elemento: 7
Inserisci elemento: 7
Inserisci elemento: 9
Inserisci elemento: 12
Inserisci elemento: 23
Inserisci elemento: 7
Inserisci x: 40
40 non presente*/

#define DIM 10

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


int main() {
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