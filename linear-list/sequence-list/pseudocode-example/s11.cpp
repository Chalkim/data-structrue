/*
 * 2011
 * */

int findMid(int a[], int b[], int L) {
    int s1 = 0, s2 = 0;
    int d1 = L - 1, d2 = L - 1;
    int m1, m2;

    while(s1 != d1 || s2 != d2) {
        m1 = (s1 + d1) / 2;
        m2 = (s2 + d2) / 2;
        if(a[m1] == b[m2])
            return A[m1];
        if(a[m1] < b[m2]) {
            if((s1 + d1) % 2 == 0) {
                s1 = m1;
                d2 = m2;
            } else {
                s1 = m1 + 1;
                d2 = m2;
            }
        } else {
            if((s2 + d2) % 2 == 0) {
                d1 = m1;
                s2 = m2;
            } else {
                d1 = m1;
                s2 = m2 + 1;
            }
        }
    }
    return A[s1] < B[s2] ? A[s1] : B[s2];
}
