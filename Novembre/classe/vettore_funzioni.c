#include <stdio.h>

#define MAX 10

void lettura(int vettore[], int *dim){
    printf("Inserisci gli elementi del vettore (0 per terminare):\n");
    int i = 0, temp;
    
    while(i < MAX && scanf("%d", &temp) == 1 && temp != 0){
        vettore[i] = temp;
        i++;
    }
    *dim = i;
}


void iMax(int vettore[], int dim, int *index){
    int max = vettore[0];
    *index = 0;
    for(int i = 0; i < dim; i++){
        if(vettore[i] > max){
            max = vettore[i];
            *index = i;
        }
    }
}



int main(int argc, char *argv[]){
    int vettore[MAX], dim, target, index;
    lettura(vettore, &dim);
    if (dim > 0) {
        iMax(vettore, dim, &index);
        printf("Indice del max: %d\n", index);
        printf("Valore max: %d\n", vettore[index]);
    } else {
        printf("Il vettore e' vuoto.\n");
    }
}