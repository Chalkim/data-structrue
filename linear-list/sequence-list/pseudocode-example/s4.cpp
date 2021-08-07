/*
 * Delete element which has value between s to t (s < t)
 * from an ordered list
 * */

void deleteElementByRange(SqList& list, int s, int t) {
	if(!(s < t) || list.length == 0) {
		printf("Error: empty list or illegal range");
		exit(FAIL);
	}

	int start, end;
	for(start = 0; start < list.length && list.data[start] < s; start++);
	if(start >= list.length) return;
	for(end = start; end < list.length && list.data[end] <= t; end++);
	for(; end < list.length; start++, end++)
		list.data[start] = list.data[end];
	list.length = start;
}
