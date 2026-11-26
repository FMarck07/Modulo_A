#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 10
/**
 * @brief Si scriva un programma in C che legge da tastiera due array di valori positivi. Il numero di elementi negli array non è noto, ma si sa che non può essere maggiore di 10. L'immissione termina quando l'utente inserisce un valore negativo o quando si arriva a 10 elementi. Successivamente, il programma deve confrontare i due array e contare quanti elementi sono presenti in entrambi.
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int arr[MAX], arr2[MAX];
    int n = 0, n2 = 0;
    int temp;
    printf("Inserisci i valori per il primo array (termina con un valore negativo):\n");
    scanf("%d", &temp);
    while(n < MAX && temp >= 0){
        arr[n] = temp;
        n++;
        if(n < MAX){
            scanf("%d", &temp);
        }
    }
    printf("Inserisci i valori per il secondo array (termina con un valore negativo):\n");
    scanf("%d", &temp);
    while(n2 < MAX && temp >= 0){
        arr2[n2] = temp;
        n2++;
        if(n2 < MAX){
            scanf("%d", &temp);
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n2; j++){
            if(arr[i] == arr2[j]){
                count++;
            }
        }
    }
    printf("Numero di elementi comuni: %d", count);


}