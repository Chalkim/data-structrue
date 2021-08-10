int getLength(LinkList list) {
    LNode* tmp = list;
    for(int i = 0; tmp->next; tmp = tmp->next, i++);
    return i;
}

LinkList findCommon(LinkList a, LinkList b) {
    int length_a = getLength(a);
    int length_b = getLength(b);
    int offset = length_a - length_b;
    LNode* pa = a, pb = b;
    if(offset >= 0) {
        for(int i = 0; i < offset; i++)
            pa = pa->next;
    } else {
        for(int i = 0; i > offset; i--)
            pb = pb->next;
    }

    while(pa != pb && pa != NULL) {
        pa = pa->next;
        pb = pb->next;
    }
    if(pa == pb)
        return pa;
    else
        return NULL;
}
