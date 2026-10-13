#include <stdio.h>
#include <stdlib.h>
/*Si legga da tastiera un numero N, compreso fra 1 e 100.
Si stampino poi i numeri da 1 a N, escludendo: i multipli di 7 i numeri in cui una cifra è 7 In questi casi, bisogna stampare “BUM!”

ESEMPIO DI ESECUZIONE

Inserire N: 23
1 2 3 4 5 6 BUM! 8 9 10 11 12 13 BUM! 15 16 BUM! 18 19 20 BUM! 22 23*/


int main(int argc, char *argv[]){
    int n, i = 0;
    do{
        printf("Inserire N: ");
        scanf("%d", &n);
    }while(n < 1 || n > 100);

    for(i = 1; i <= n; i++){
        if(i % 7 == 0 || i % 10 == 7 || i / 10 == 7){
            printf("BUM! ");
        }else printf("%d ", i);
    }

    return 0;
}
