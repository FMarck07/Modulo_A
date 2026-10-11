#include <stdio.h>

/*rogettare un programma in linguaggio C che:
Prende in ingresso una data valida (giorno, mese, anno forniti come interi nel formato GG/MM/AAAA).
Calcola la data del giorno precedente e la stampa a video nello stesso formato.
Gestisce correttamente:Il passaggio al mese precedente (con il corretto numero di giorni: 30, 31, 28 o 29).
Gli anni bisestili (il 1° marzo di un anno bisestile ha come giorno precedente il 29 febbraio, altrimenti il 28).
Il passaggio di anno (il 1° gennaio ha come giorno precedente il 31 dicembre dell'anno precedente).
*/

#define GIORNO_MIN 1

int main(int argc, char *argv[]){
    int anno, giorno, mese;
    do{
        printf("Inserire la data [GG/MM/AAAA]: ");
        scanf("%d/%d/%d", &giorno, &mese, &anno);
    }while (anno <= 0 || mese <= 0 || mese > 12 || giorno <= 0 || giorno > giorni_mese[mese]);

    int giorno_max;

    if(giorno > GIORNO_MIN) {
        giorno--;
    }else{
        if(mese == 1){
            mese = 12;
            anno--;
            giorno = 12;
        }else {
            mese--;
            if(mese == 2){
                if((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) giorno = 29;
                else giorno = 30;
            }lse if (mese == 4 || mese == 6 || mese == 9 || mese == 11) {
                giorno = 30;
            } else {
                giorno = 31;
            }
        }
    }

    printf("PRECEDENTE: %d/%d/%d", giorno, mese, anno);

    return 0;
}