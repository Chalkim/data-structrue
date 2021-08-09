/*
 * Reverse the elements in the list
 * with O(1) space complexity
 * */

void reverse(SqList& list) {
    if(list.length == 0) return;
    for(int i = 0; i < list.length / 2; i++) {
        int tmp = list.data[i];
        list.data[i] = list.data[length - 1 - i];
        list.data[length - 1 - i] = tmp;
    }
}
