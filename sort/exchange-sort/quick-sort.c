/*
  Space complexity: O(log n) 
    Best: O(log n)
    Worst: O(n)
    Average: O(log n)
  Time complexity: O(nlog n)
    Best: O(nlog n)
    Worst: O(n^2)
    Average: O(nlog n)
*/

void QucikSort(int A[], int low, int high) {
    if(low < high) {
        int pivotpos = Partition(A, low, high);
        QuickSort(A, low, pivotpos - 1);
        QuickSort(A, pivotpos + 1, high);
    }
}

int Partition(int A[], int low, int high) {
    int pivot = A[low];
    while(low < high) {
        while(low < high && A[high] >= pivot) {
            --high;
        }
        A[low] = A[high];
        while(low < high && A[low] <= pivot) {
            ++low;
        }
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}
