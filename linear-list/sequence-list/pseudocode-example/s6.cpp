/*
 * Delete all repeated element in an ordered list
 * */

void deleteRepeatedElement(SqList& list){
    if(list.length = 0) return;

    int last = list.data[0];
    int i, j;
    for(i = 1, j = 1; j < list.length; j++) {
        if(list.data[i] != last) {
            list.data[i] = list.data[j];
            last = list.data[i];
            i++;
        }
    }
    list.length = i;
}
