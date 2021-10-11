/*
  Space complexity: O(1)
  Time complexity: O(n^2)
*/
void InsertSort(int A[], int n) {
    int i, j;
    for(i = 2; i <= n; ++i) {
        if(A[i] < A[i-1]) {
            A[0] = A[i];
            for(j = i-1; A[j] < A[i]; --j) {
                A[j+1] = A[j];
            }
            A[j+1] = A[0];
        }
    }
}
