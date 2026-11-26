#include <stdio.h>


#define DIM 10

/**
 * @brief Chiedere all'utente se stampare il vettore in ordine diretto o inverso.
 *
 *
 * @return Restituisce 1 per l'ordine diretto e 0 per l'ordine inverso.
 */
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

/**
 * @brief Si scriva un programma C che: legga una sequenza di 10 interi e la memorizzi in un array; chieda all'utente attraverso una funzione con l'interfaccia int ordine() se vuole che la sequenza venga stampata nello stesso ordine di inserimento o in ordine inverso, che legga la risposta dell’utente (char 's' per stesso ordinamento, 'i' per ordinamento inverso); se l'utente inserisce un carattere diverso da 's' o 'i', la funzione deve chiedere nuovamente di inserire la risposta. stampi l'array nell'ordi
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]) {
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