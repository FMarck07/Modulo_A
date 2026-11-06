#include <stdio.h>

/*Si scriva un programma C che:

Legga da tastiera 10 elementi interi e li inserisca in un vettore di dimensione opportuna utilizzando la definizione di costante per la dimensione del vettore;
verifichi se la sequenza è ordinata in ordine strettamente crescente e stampi a video il risultato 
ESEMPI DI ESECUZIONE:

Inserisci 10 numeri:
1
2
3
4
5
6
7
8
10
15
CRESCENTE
Inserisci 10 numeri:
1
2
3
5
4
6
7
8
9
10
NON CRESCENTE*/

#define DIM 10

int controllo(int vettore[]){
    for(int i = 0; i<DIM - 1; i++){
        if(vettore[i] >= vettore[i+1]){
            return 0;
        }
    }
    return 1;
}

int main() {
    int vettore[DIM];
    printf("Inserisci 10 numeri:\n");
    for(int i = 0; i<DIM; i++){
        scanf("%d", &vettore[i]);
    }
    if(controllo(vettore)){
        printf("CRESCENTE");
    }else printf("NON CRESCENTE");
}
