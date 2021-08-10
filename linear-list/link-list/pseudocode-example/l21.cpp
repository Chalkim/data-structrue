/*
 * 2009
 * */

int func(LinkList list, int k) {
    LNode* p = list;
    LNode* q = list;
    int offset = 0;
    while(q){
        if(offset != k) {
            offset++;
        } else {
            p = p->next;
        }
        q = q->next;
    }

    if(offset == k) {
        printf("%d", p->data);
        return 1;
    }
    return -1;
}
