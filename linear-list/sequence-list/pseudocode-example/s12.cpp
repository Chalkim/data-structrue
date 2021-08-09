/*
 * 2013
 * */

int findMain(int A[], int size) {
    if(A == NULL) return -1;
    int counter = 1, i;
    int tmp = A[0];  // initial

    for (i = 1; i < size; i++){
        if(A[i] == tmp)
            counter++;
        else
            counter--;

        if(counter == 0) {
            tmp = A[i];
            counter = 1;
        }
    }

    if(counter == 0) {
        return -1;
    } else {
        counter = 0;
        for(i = 0; i < size; i++) {
            if(A[i] == tmp) counter++;
        }
    }
    if(counter > size/2) return tmp;
    else return -1;
}
