/*
 * Merge two ordered list into one.
 * */

void merge(SqList l_a, SqList l_b, SqList l_c){
	int i = 0, j = 0, k = 0;
	while(i < l_a.length && j < l_b.length) {
		if(l_a.data[i] <= l_b.data[j])
			l_c.data[k++] = l_a.data[i++];
		else
			l_c.data[k++] = l_b.data[j++];
	}

	while(i < l_a.length)
		l_c.data[k++] = l_a.data[i++];
	while(j < l_b.length)
		l_c.data[k++] = l_b.data[j++];
	l_c.length = k;
}
