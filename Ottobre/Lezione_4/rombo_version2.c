#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int n, limite;
    do{
        printf("Inserire N: ");
        scanf("%d", &n);
    }while(n <= 0);

    for(int i = 0; i < n; i++){
        int limite = n + i;
        for(int j = 0; j < limite; j++){
            if(j == (n - 1 - i) || j == (n + i - 1)){
                printf("*");
            }else printf(" ");
        }
        printf("\n");
    }
    for(int i = n - 2; i >= 0; i--){
        int limite = n + i;
        for(int j = 0; j < limite; j++){
            if(j == (n - i - 1) || j == (n + i - 1)){
                printf("*");
            }else printf(" ");
        }
        printf("\n");
    }

    return 0;
}
