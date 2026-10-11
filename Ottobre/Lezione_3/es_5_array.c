#include <stdio.h>

int main(int argc, char *argv[]) {
    int anno, giorno, mese;
    int giorni_mese[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    do {
        printf("Inserire la data [GG/MM/AAAA]: ");
        scanf("%d/%d/%d", &giorno, &mese, &anno);
    }while (anno <= 0 || mese <= 0 || mese > 12 || giorno <= 0 || giorno > giorni_mese[mese]);
    
    if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
        giorni_mese[2] = 29;
    }

    if (giorno < giorni_mese[mese]) {
        giorno++;
    } else {
        giorno = 1;
        if (mese == 12) {
            anno++;
            mese = 1;
        } else {
            mese++;
        };
    }

    printf("SUCCESSIVO: %d/%d/%d\n", giorno, mese, anno);

    return 0;
}