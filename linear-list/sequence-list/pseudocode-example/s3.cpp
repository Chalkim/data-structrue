/*
 * Delete all the element which has data equals value x
 * with O(n) time complexity and O(1) space complexity
 * */

void deleteAllElementByValue(SqList& list, int x){
	if(list.length == 0) return;
	
	for(int i = 0, int j = 0; i < list.length; i++, j++) {
		if(list.data[i] == x) {
			j++; list.length--;
			list.data[i] = list.data[j];
		}
		list.data[i] = list.data[j];
	}
}
