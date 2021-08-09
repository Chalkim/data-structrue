void deleteByValue(LNode* L, value x) {
    LNode* pre = L, p = L->next;
    while(p) {
        if(p->data == x) {
            LNode* tmp = p;
            pre->next = p->next;
            free(tmp);
        } else {
            pre = p;
            p = p->next;
        }
    }
}
