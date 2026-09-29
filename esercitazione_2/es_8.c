#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Un robot aspirapolvere si trova sul pavimento, grazie a dei sensori può individuare un oggetto fino ad una certa distanza. 
Inserendo da tastiera questa distanza (intero in cm), stampare a video l'area di rilevamento oggetti dell'aspirapolvere, 
quando questo compie un giro completo su sé stesso (approssimare π=3).
Si supponga inoltre che il robot possa essere programmato per spostarsi per un certo numero di minuti, 
impostati dall'utente (intero). Data la sua velocità di 30 cm/sec, stampare a video la distanza percorsa (in cm) 
nel lasso di tempo impostato.

ESEMPIO DI ESECUZIONE (prestare attenzione all'unità di misura dopo il valore dell'area e della distanza percorsa)

Distanza:5
Area:75cm2
Tempo spostamento:5
Distanza:9000cm*/

#define VELOCITA 30

int main(){
    float distanza, area;
    int tempo_spostamento, distanza_p;
    printf("Distanza:");
    scanf("%f", &distanza);
    area = pow(distanza, 2) * M_PI;
    printf("Area:%.2fcm2\n", area);
    printf("Tempo spostamento:");
    scanf("%d", &tempo_spostamento);
    distanza_p = tempo_spostamento * VELOCITA*60;
    printf("Distanza:%d\n", distanza_p);
}