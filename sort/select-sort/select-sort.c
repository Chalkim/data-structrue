/*
  Space complexity: O(1)
  Time complexity: O(n^2)
*/

void SelectSort(int A[], int n) {
    int i, j, min;
    for(i=0; i<n-1; ++i) {
        min = i;
        for(j=i+1; j<n; ++j) {
            if(A[j] < A[min]) {
                min = j;
            }
        }
        if(min != i) {
            Swap(A[i], A[min]);
        }
    }
}

