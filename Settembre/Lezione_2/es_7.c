

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LIVELLO_A 18
#define LIVELLO_S 13


/**
 * @brief Anna e Stefano stanno giocando ad un videogioco medioevale online. Il personaggio di Anna è un cavaliere di livello 18, mentre quello di Stefano è un cavaliere di livello 13. Il combattimento segue queste regole: Durante una battaglia, il danno che ogni personaggio infligge ad un nemico è pari alla sua forza moltiplicata per il suo livello. Il danno totale che due cavalieri possono infliggere ad un nemico pari alla somma dei danni dei singoli personaggi. La difesa rimanente del nemico dopo un
 *
 * @param argc Numero di argomenti passati attraverso la riga di comando.
 * @param argv Array di stringhe contenente gli argomenti passati attraverso la riga di comando.
 *
 * @return Restituisce 0 al termine normale dell'esecuzione; restituisce un valore diverso in caso di errore.
 */
int main(int argc, char *argv[]){
    int forza_a, forza_s;
    int difesa, difesa_rimasta, danno;
    printf("Forza Anna:");
    scanf("%d", &forza_a);
    printf("Forza Stefano:");
    scanf("%d", &forza_s);
    danno = forza_a * LIVELLO_A + forza_s * LIVELLO_S;
    difesa = 4 * danno;
    difesa_rimasta = difesa - danno;
    printf("Difesa:%d", difesa_rimasta);
}