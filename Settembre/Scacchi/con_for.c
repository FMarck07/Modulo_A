#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// algoritmo che mi permetta di capire se un pezzo degli scacchi (re) è sotto scacco dalla regina.


#define N 8

int main(int argc, char *argv[]){
    int xq, yq, xk, yk;
    
    printf("Inserisci x della regina: ");
    scanf("%d", &xq);
    printf("Inserisci y della regina: ");
    scanf("%d", &yq);

    printf("Inserisci x del re: ");
    scanf("%d", &xk);
    printf("Inserisci y del re: ");
    scanf("%d", &yk);

    if (xq == xk && yq == yk) {
        printf("I due pezzi non possono essere sulla stessa casella!\n");
        return 1;
    }


    if (xq == xk || yq == yk) {
        printf("Scacco!\n");
        return 0;
    }else printf("no");
    

    // controllo tramite un for
    for(int i = 1; i < N; i++){
        if((xq + i == xk && yq + i == yk) || (yq - i == yk && xq - i == xk) || (xq - i == xk && yq + i == yk) || (xq + i == xk && yq - i == yk)){
            printf("Scacco");
            return 0;
        }
    }

    printf("no");    

    return 0;
}
