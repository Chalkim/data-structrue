
/*
 * Delete all the element which has data between s to t
 * with O(n) time complexity and O(1) space complexity
 * */

void deleteAllElementByValue(SqList& list, int s, int t){
	if(t < s || list.length == 0) return;
	
	for(int i = 0, int j = 0; j < list.length; j++) {
		if(!(list.data[j] >= s && list.data[j] <= t)) {
			list.data[i] = list.data[j];
			i++;
		}
	}
	list.length = i;
}
