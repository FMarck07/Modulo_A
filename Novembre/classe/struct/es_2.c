#include <stdio.h>
#include <string.h>

typedef struct{
    int minuti;
    int ora;
}Orario;

Orario succ(Orario attuale){
    attuale.minuti++;
    if(attuale.minuti == 60){
        attuale.minuti = 0;
        attuale.ora++;
        if(attuale.ora == 24){
            attuale.ora = 0;
        }
    }

    return attuale;
}

int main() {
    Orario attuale, successivo;
    do{
        printf("Inserisci l'orario attaule: \n");
        printf("Ora: \n");
        scanf("%d", &attuale.ora);
        printf("minuti: \n");
        scanf("%d", &attuale.minuti);
    } while (attuale.ora < 0 || attuale.ora > 23 || attuale.minuti < 0 || attuale.minuti > 59);    
    successivo = succ(attuale);    
    
    printf("%d: %d", successivo.ora, successivo.minuti);
    return 0;
}
