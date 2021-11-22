#include <stdio.h>

int partition(int A[], int low, int high) {
  int pivot = A[low];
  while(low < high) {
    while(low < high && A[high] >= pivot) high--;
    A[low] = A[high];
    while(low < high && A[low] <= pivot) low++;
    A[high] = A[low];
  }
  A[low] = pivot;
  return low;
}

void print(int A[], int length) {
  for(int i = 0 ; i < length; i++) {
    printf("%d ", A[i]);
  }
}

int main() {
  int A[] = {1, 12, 21, 65, 38, -1, 97, 76, 13, 27, 49};
  int length = 11;
  int low = 0;
  int high = length - 1;
  int mid = (low + high) / 2;
  int i = 0;
  while(i != mid) {
    i = partition(A, low, high);
    if(i < mid) low = i + 1;
    if(i > mid) high = i - 1;
  }
  printf("%d\n", i);
  print(A, length);

  return 0;
}
