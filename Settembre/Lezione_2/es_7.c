/*
Anna e Stefano stanno giocando ad un videogioco medioevale online. Il personaggio 
di Anna è un cavaliere di livello 18, mentre quello di Stefano è un cavaliere di livello 13.

Il combattimento segue queste regole:

Durante una battaglia, il danno che ogni personaggio infligge ad un nemico è pari alla sua forza moltiplicata per il suo livello.
Il danno totale che due cavalieri possono infliggere ad un nemico pari alla somma dei danni dei singoli personaggi.
La difesa rimanente del nemico dopo un loro attacco è pari alla differenza tra la sua difesa e il danno complessivo da loro inflitto.

Un mago malvagio vuole sfidarli, e dice loro: "La mia difesa è quattro volte più grande del danno complessivo che mi farete!". 
Dopo aver inserito da tastiera le forze di attacco dei cavalieri (due interi), quanto vale la difesa del mago dopo averlo attaccato?

ESEMPIO DI ESECUZIONE

Forza Anna:10
Forza Stefano:5
Difesa:735

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LIVELLO_A 18
#define LIVELLO_S 13


int main(){
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