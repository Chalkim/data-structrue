/*
 * 2020
 * */

int distence(int arr[]) {
    int a = arr[0];
    int b = arr[1];
    int c = arr[2];
    return abs(a-b) + abs(b-c) + abs(c-a);
}

int isXMin(int X, int A, int B) {
    return X < A && X < B;
}

int findMinDistence(int A[], int B[], int C[], int size[], int& res[]) {
    int tmp[3];  // temp var for save current 3-tuple
    int minDistence = MAX;
    int p[3] = {0};

    while(p[0] < size[0] && p[1] < size[1] && p[2] < size[2]) {
            tmp[0] = A[p[0]];
            tmp[1] = B[p[1]];
            tmp[2] = C[p[2]];
        minDistence = minDistence < distence(tmp) ? minDistence : distence(tmp);

        if(isXMin(A[p[0]], B[p[1]], C[p[2]]) i = 0;
        if(isXMin(B[p[1]], A[p[0]], C[p[2]]) i = 1;
        if(isXMin(C[p[2]], A[p[0]], B[p[1]]) i = 2;

        p[i]++;
    }
    return minDistence;
}
