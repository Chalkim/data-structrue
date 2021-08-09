void deleteByRange(LinkList* list, int m, int n) {
    LinkList* pre = list;
    LinkList* p = list->next;

    while(p) {
        if(p->data > m && p->data < n) {
            pre->next = p->next;
            free(p);
            p = pre->next;
        } else {
            pre = p;
            p = p->next;
        }
    }
}
