#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

/*Si progetti un programma che converta lo stipendio di un dipendente di un'azienda in sterline o in yen. 

Si creino le seguenti funzioni:

Funzione di conversione euro/sterlina: float EuroSterlina(int stipendio) che effettua la conversione (1 euro = 0,91 sterlina)

Funzione di conversione euro/yen: float EuroYen(int stipendio) che effettua la conversione (1 euro = 124,09 yen)

Non è necessario eseguire un controllo sull'input.*/

float EuroSterlina(int stipendio){
    return stipendio * 0.91;
}

float EuroYen(int stipendio){
    return stipendio * 124.09;
}