#include <stdio.h>
#include <string.h>


/*Scrivi una funzione in C che riceve un array di interi e la sua dimensione, e trova contemporaneamente il valore minimo, il valore massimo e la media degli elementi.

Poiché in C una funzione può restituire un solo valore con return, dovrai usare i puntatori per "restituire" tutti e tre i risultati direttamente alle variabili dichiarate nel main.*/

#define MAX 10

void valori(int *arr, int dim, int *min, int *max, float *media){
    *min = *arr;
    *max = *arr;
    int somma = 0;
    for(int i = 0; i < dim; i++){
        if(*min > *(arr + i)) {
            *min = *(arr + i);
        }
        if(*max < *(arr + i)){
            *max = *(arr + i);
        }
        somma += *(arr + i);
    }
    *media = (float)somma / dim;
}

int main(){
    int array[MAX], temp, l = 0, min, max;
    float media = 0;
    printf("Inserisci gli elementi dell'array\n");
    printf("Termina quando inserisci 0\n");
    scanf("%d", &temp);
    while(l < MAX && temp != 0){
        array[l] = temp;
        l++;
        if(l < MAX){
            scanf("%d", &temp);
        }
    }
    
    if (l > 0) {
        valori(array, l, &min, &max, &media);
        printf("Minimo: %d\n", min);
        printf("Massimo: %d\n", max);
        printf("Media: %.2f\n", media);
    } else {
        printf("Nessun numero valido inserito.\n");
    }
}