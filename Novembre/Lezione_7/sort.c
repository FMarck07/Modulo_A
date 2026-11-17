#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int confronta_interi(const void *a, const void *b) {
    int x = *(const int *) a;
    int y = *(const int *) b;

    return(x > y) - (y > x);
    //return (y > x) - (y < x);
}

int confronta_stringhe(const void *a, const void *b) {
    const char *x = *(const char **) a;
    const char *y = *(const char **) b;

    return strcmp(x, y);
    //return (y > x) - (y < x);
}

int main(){
    int arr[] = {50, 12, 5, 7, 78, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, n, sizeof(int), confronta_interi);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    const char *parole[] = {"pera", "mela", "banana", "arancia"};
    int n_parole = sizeof(parole) / sizeof(parole[0]);
    qsort(parole, n_parole, sizeof(const char *), confronta_stringhe);
    int i = 0;
    for(int i = 0; i < n_parole; i++){
        printf("\n%s", parole[i]);
    }
}