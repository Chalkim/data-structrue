/*
  Space complexity: O(1)
  Time complexity: O(n^1.3)
            Worst: O(n^2)
*/
void ShellSort(int A[], int n) 
{
    for(dk = n/2; dk >= 1; dk = dk/2) 
    {
        for(i = dk + 1; i <= n; ++i) 
        {
            if(A[i] < A[i-dk]) 
            {
                A[0] = A[i];
                for(j = i-dk; j > 0 && A[0] < A[j]; j-=dk) 
                {
                    A[j+dk] = A[j];
                }
                A[j+dk] = A[0];
            }
        }
    }
}

