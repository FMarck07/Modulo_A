/*Un bambino compra delle caramelle da dividere equamente con i suoi compagni e vuole calcolare quante caramelle spettano a ciascuno di essi, quante ne rimarranno e quanto ha speso per ogni suo compagno, conoscendo il prezzo di ogni caramella.

Progettare un programma in linguaggio C che legge da tastiera:

il numero di caramelle;
il prezzo unitario delle caramelle;
il numero di bambini;
Il programma deve stampare a video:

il numero di caramelle che spettano a ciascun bambino;
il numero di caramelle che rimangono;
la spesa per ciascun bambino.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    int caramelle;
    float prezzo;
    int bambini;

    printf("Caramelle:");
    scanf("%d", &caramelle);

    printf("Prezzo:");
    scanf("%f", &prezzo);

    printf("Bambini:");
    scanf("%d", &bambini);

    int per_bambino = caramelle / bambini;
    int rimaste = caramelle % bambini;
    float spesa_bambino = per_bambino * prezzo;

    printf("Caramelle per bambino:%d\n", per_bambino);
    printf("Caramelle rimaste:%d\n", rimaste);
    
    if (spesa_bambino == (int)spesa_bambino) {
        printf("Spesa per bambino:%.0f\n", spesa_bambino);
    } else {
        printf("Spesa per bambino:%.2f\n", spesa_bambino);
    }

    return 0;
}