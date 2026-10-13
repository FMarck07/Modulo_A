#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Realizzare un programma C che, chiesto all’utente un numero intero pari a N , ricavi e stampi a video tutte le terne pitagoriche con i cateti minori o uguali ad N, senza utilizzare direttamente funzioni di calcolo della radice quadrata.

SUGGERIMENTO: Una terna pitagorica è formata da tre numeri naturali (a, b, c) tali che a2+b2=c2. 
Esempio: 3,4,5 -> (9+16=25). Calcolare solo le terne in cui a<b.

ESEMPIO DI ESECUZIONE

Inserire il valore di n: 12
3, 4, 5
5, 12, 13
6, 8, 10
9, 12, 15*/

int main(int argc, char *argv[]){
    int n;
    do{
        printf("Inserire il valore di n: ");
        scanf("%d", &n);
    }while(n % 2 != 0);
    
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            for(int t = j + 1; pow(t, 2) <= pow(j, 2) + pow(i, 2); t++){
                if((pow(j, 2) + pow(i, 2) == pow(t, 2))){
                    printf("%d, %d, %d\n", i, j, t);
                }
            }

        }
    }
    return 0;    
}