int zeri (int *a, int n){
    if(n<0) return 1;
    if(a[n-1] != 0) return 0;
    return zeri(a, n-1);
}