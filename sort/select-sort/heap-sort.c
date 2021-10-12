/*
  Space complexity: O(1)
  Time complexity: O(nlog n)
*/

void HeapSort(int A[], int len) {
    BuildMaxHeap(A, len);
    for(i=len; i>1; --i) {
        Swap(A[i], A[1]);
        HeadAdjust(A, 1, i-1);
    }
}

void BuildMaxHeap(int A[], int len) {
    for(int i = len / 2; i > 0; i--) {
        HeapAdjust(A, i, len);
    }
}

void HeapAdjust(int A[], int k, int len) {
    A[0] = A[k];
    for(i = 2*k; i <= len; i *= 2) {
        if(i < len && A[i] < A[i+1]) {
            i++;
        }
        if(A[0] >= A[i]) {
            break;
        } else {
            A[k] = A[i];
            k = i;
        }
    }
    A[k] = A[0];
}
