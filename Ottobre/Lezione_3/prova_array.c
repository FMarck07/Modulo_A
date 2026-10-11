#include <stdio.h>

#define GIORNO_MIN 1

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

    // 2. Calcola il giorno precedente
    if (giorno > GIORNO_MIN) {
        giorno--;
    } else {
        if (mese == 1) {
            anno--;
            mese = 12;
        } else {
            mese--;
        }
        giorno = giorni_mese[mese];
    }

    printf("PRECEDENTE: %d/%d/%d\n", giorno, mese, anno);

    return 0;
}