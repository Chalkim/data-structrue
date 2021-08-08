/*
 * Delete all the element which has data equals value x
 * with O(n) time complexity and O(1) space complexity
 * */

void deleteAllElementByValue(SqList& list, int x){
	if(list.length == 0) return;

	int i, j;
	for(i = 0, j = 0; j < list.length; j++) {
		if(list.data[j] != x) {
			list.data[i] = list.data[j];
			i++;
		}
	}
	list.length = i;
}
