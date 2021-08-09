void deleteMin(LinkList& list) {
    LNode* pre, p;
    LNode* preMin, min;

    pre = list; p = list->next;
    preMin = pre; min = p;
    while(p) {
        if(p->data < min->data) {
            preMin = pre;
            min = p;
        }
        pre = p;
        p = p->next;
    }

    preMin->next = min->next;
    free(min);
}
