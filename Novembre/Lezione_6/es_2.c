#include <stdio.h>


/*Si scriva un programma C che:
legga una sequenza di 10 interi e la memorizzi in un array;
chieda all'utente attraverso una funzione con l'interfaccia int ordine() se vuole che la sequenza venga stampata nello stesso ordine di inserimento o in ordine inverso, che legga la risposta dell’utente (char 's' per stesso ordinamento, 'i' per ordinamento inverso); se l'utente inserisce un carattere diverso da 's' o 'i', la funzione deve chiedere nuovamente di inserire la risposta.
stampi l'array nell'ordine richiesto.

ESEMPIO DI ESECUZIONE:

Inserisci numero: 11
Inserisci numero: 4
Inserisci numero: 2
Inserisci numero: 5
Inserisci numero: 5
Inserisci numero: 6
Inserisci numero: 7
Inserisci numero: 8
Inserisci numero: 9
Inserisci numero: 0
ordine: 3
Errore
i
[ 0 9 8 7 6 5 5 2 4 11 ]*/

#define DIM 10

int ordine(){
    char risposta;
    do{
        scanf(" %c", &risposta);
        if(risposta != 's' && risposta != 'i'){
            printf("Errore\n");
        }
    }while(risposta != 's' && risposta != 'i');

    return (risposta == 's');
}

int main() {
    int numbers[DIM], risposta;

    for(int i = 0; i <  DIM; i++){
        printf("Inserisci numero: ");
        scanf("%d", &numbers[i]);
    }
    
    printf("ordine: ");

    risposta = ordine();

    if(risposta){
        printf("[ ");
        for(int i = 0; i <  DIM; i++){
            printf("%d ", numbers[i]);
        }
    }else{
        printf("[ ");
        for(int i = DIM - 1; i >= 0; i--){
            printf("%d ", numbers[i]);
        }
    }
    printf("]\n");

    return 0;
}
