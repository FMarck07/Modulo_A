#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[100];

    printf("Inserisci la prima parola: ");
    scanf("%99s", str1);

    int l = strlen(str1);
    char str2[l + 1];

    strcpy(str2, str1);

    /*for(int i = 0; i <= l; i++){
        str2[i] = str1[i];
    }*/
    printf("parola %s", str2);
    return 0;
}
