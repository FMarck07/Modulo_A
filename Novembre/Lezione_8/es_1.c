#include <stdio.h>

typedef struct {
    int hp, att, dif;
} Personaggio; 

typedef struct {
    Personaggio p;
    int n_pozioni;
} Umano; 

int main() {
    Personaggio licantropo;
    Umano umano;
    int count = 0, danno;

    printf("Inserisci le caratteristiche dell'umano (HP, ATT, DEF):\n");
    scanf("%d,%d,%d", &umano.p.hp, &umano.p.att, &umano.p.dif);
    printf("Inserisci le caratteristiche del licantropo (HP, ATT, DEF):\n");
    scanf("%d,%d,%d", &licantropo.hp, &licantropo.att, &licantropo.dif);
    printf("Inserisci il numero di pozioni curative possedute dall'umano:\n");
    scanf("%d", &umano.n_pozioni);

    while (umano.p.hp > 0 && licantropo.hp > 0) {
        count++;
        printf("\n------ INIZIO ROUND ------\n");
        printf("HP umano : %d, HP licantropo: %d\n", umano.p.hp, licantropo.hp);

        if (umano.p.hp <= 10 && umano.n_pozioni > 0) {
            umano.p.hp += 10;
            umano.n_pozioni--;
            printf("L'umano usa la pozione curativa. HP umano: %d\n", umano.p.hp);
        
            danno = (licantropo.att * 2) / 2 - umano.p.dif;
            if (danno < 0) danno = 0;

            umano.p.hp -= danno;
            printf("Il licantropo attacca. L'umano e' protetto dalla pozione. HP umano: %d\n", umano.p.hp);
        } else {
            danno = umano.p.att * 2 - licantropo.dif;
            if (danno < 0) danno = 0;

            licantropo.hp -= danno;
            printf("L'umano attacca. HP licantropo: %d\n", licantropo.hp);

            if (licantropo.hp > 0) {
                danno = licantropo.att * 2 - umano.p.dif;
                if (danno < 0) danno = 0;

                umano.p.hp -= danno;
                printf("Il licantropo attacca. HP umano: %d\n", umano.p.hp);
            }
        }
        printf("------ FINE ROUND ------\n");
    }

    if (umano.p.hp > 0) {
        printf("\nVittoria in %d rounds", count);
    } else {
        printf("\nSconfitta in %d rounds", count);
    }

    return 0;
}