/*
  Space complexity: O(n)
  Time complexity: O(nlog n)
*/
#include <stdlib.h>

int *B = (int *)malloc((n+1) * sizeof(int));
// Merge A[low, mid] and A[mid + 1, high] to sorted list;
void Merge(int A[], int low, int mid, int high) {
    for(int k=low; k<=high; k++) {  // copy A to B
        B[k] = A[k];
    }

    // copy larger item (B[i] or B[j]) to A[k]
    for(i=low, j=mid+1, k=i;        // B[low, ...], B[mid + 1, ...]
        i <= mid && j<= high;       // B[..., mid], B[..., high]
        ++k) {                      // next dist A[k]
        if(B[i] <= B[j]) {
            A[k] = B[i];
            ++i;  // next i
        } else {
            A[k] = B[j];
            ++j;  // next j
        }
    }
    // i > mid or j > high
    while(i<=mid) {     // copy rest B[..., mid]
        A[k] = B[i];    // copy B[i]
        ++k; ++i;       // next k, i
    }

    while(j<=high) {   // copy rest B[..., high]
        A[k] = B[j];   // copy B[j]
        ++k; ++j;      // next k, j
    }
}

void MergeSort(int A[], int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        MergeSort(A, low ,mid);
        MergeSort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}
