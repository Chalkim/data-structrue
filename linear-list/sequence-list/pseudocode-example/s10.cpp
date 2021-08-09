/*
 * 2010
 * */

void reverse(int R[], int m, int n) {
    if(m > n) return;
    for(;m < n ; m++, n--) {
        int tmp = R[m];
        R[m] = R[n];
        R[n] = tmp;
    }
}

void converse(int R[], int n, int p) {
    reverse(R, 0, p-1);
    reverse(R, p, n-1);
    reverse(R, 0, n-1);
}
