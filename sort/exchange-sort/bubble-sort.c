/*
  Space complexity: O(1)
  Time complexity: O(n^2)
*/
void BubbleSort(int A[], int n) {
    int i, j;
    bool flag;
    for (i = 0; i < n-1; ++i) {
        flag = false;
        for (j = n-1; j > i; --j) {
            if (A[j-1] > A[j]) {
                swap(A[j-1], A[j]);
                flag = true;
            }
        }
        if (flag == false) {
            return;
        }
    }
}
