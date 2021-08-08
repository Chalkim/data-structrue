/*
 * Swap two sub list in an array A[m+n]
 * (a1, a2, ..., am), (b1, b2, ...,bn)
 * */

void reverse(int A[], int m, int n) {
	if(m > n) return;
	for(int i = m, j = n; i < j; i++, j--) {
		int tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;
	}
}

// A[0:m-1] sublist a
// A[m:m+n-1] sublist b
void swap(int A[], int m, int n, int A_size){
	if(m <= 0 || n <= 0) return;
	reverse(A, 0, m+n-1);
	reverse(A, 0, n-1);
	reverse(A, n, n+m-1);
}
