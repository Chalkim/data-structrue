/* 
 * Delete and return min elemenet
 * Replace min element with the last element
 * */

int func(SqList& list) {
	if(list.length == 0) {
		printf("Error: empty list");
		exit(FAIL);
	}
	int min_index;
	int min = list.data[0];

	for (int i = 0; i < list.length; i++){
		min = (min < list.data[i] ? min : list.data[i]);
		min_index = i;
	}
	
	list.data[min_index] = list.data[length - 1];
	list.length--;

	return min;
}
