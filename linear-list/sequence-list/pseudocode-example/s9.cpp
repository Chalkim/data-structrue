/*
 * Find x in an ordered list as soon as possible
 * swap x with its successor element if x exists
 * or insert x into the list.
 * */

// return index of x or -1
int find(SqList& list, int m, int n, int x){
	if(m > n)
		return n;
	int mid = (m + n) / 2;
	if(x == list.data[mid])
		return mid;
	else if(x > list.data[mid])
		return find(list, m, mid - 1, x);
	else
		return find(list, mid + 1, n, x);
}

// swap element with its successor element
void swap(SqList& list, int index) {
	if(index < list.length - 1){
		int tmp = list.data[index];
		list.data[index] = list.data[index + 1];
		list.data[index + 1] = tmp;
	}
}

void insert(SqList& list, int index, int x) {
	for(int i = list.length - 1; i > index; i--){
		list.data[i] = list.data[i-1];
	}
	list.data[index+1] = x;
}

void func(SqList& list, int x){
	int index = find(list, 0, list.length - 1, x);
	if(list.data[index] == x) {
		swap(list, index);
	} else {
		insert(list, index, x);
	}
}
