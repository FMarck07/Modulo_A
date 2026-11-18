#include <stdio.h>
#include <string.h>


#define DIM 100

typedef struct{
    int orario_inizio, durata;
}Lezione; 

int controllo(Lezione a, Lezione b){
    if(a.orario_inizio >= b.orario_inizio + b.durata || a.orario_inizio + a.durata <= b.orario_inizio){
        return 0;
    } else return 1;
}

void modifica(Lezione *a, Lezione *b){
    int differenza;
    if((*a).orario_inizio > (*b).orario_inizio){
        differenza = (*b).orario_inizio + (*b).durata - (*a).orario_inizio;
        (*a).orario_inizio += differenza;
    }else{
        differenza = (*a).orario_inizio + (*a).durata - (*b).orario_inizio;
        (*b).orario_inizio += differenza;
    }
}   


void lettura(Lezione *lezione){
    scanf("%d", &((*lezione).orario_inizio));
    scanf("%d", &((*lezione).durata));
}

int main() {
    Lezione info, mate;
    
    lettura(&info);
    lettura(&mate);
    if(controllo(info, mate)){
        modifica(&info, &mate);
        printf("orario info: %d %d \t orario mate: %d %d", info.orario_inizio, info.durata, mate.orario_inizio, mate.durata);
    }else{
        printf("OK");
    }

    
    return 0;
}