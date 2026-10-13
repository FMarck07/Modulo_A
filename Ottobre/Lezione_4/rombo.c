#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int n;
    do{
        printf("Inserire N: ");
        scanf("%d", &n);
    }while(n <= 0);

    for(int i = 0; i < n; i++){
        for(int s = 0; s < n - i - 1; s++){
            printf(" ");
        }
        for(int j = 0; j < (i*2 + 1); j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = n - 1; i > 0; i--){
        for(int s = 0; s < n - i; s++){
            printf(" ");
        }
        for(int j = 0; j < (i*2 - 1); j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
