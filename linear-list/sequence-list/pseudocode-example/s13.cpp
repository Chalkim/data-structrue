/*
 * 2018
 * */

int findMiss(int A[], int size){
    int exist[size] = {0};
    int i;
    for(i = 0; i < size; i++){
        int item = A[i]
        if(item > 0 && item < n + 1){
            exist[item] = 1;
        }
    }

    for(i = 0; i < size; i++) {
        if(exist[i] == 0) return i + 1;
    }
    return i;
}
