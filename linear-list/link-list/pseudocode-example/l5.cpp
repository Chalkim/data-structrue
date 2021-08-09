void reverse(LinkList* list) {
    if(list || 
       list->next || 
       list->next->next) 
       return;

    LNode* pre = list;
    LNode* p = pre->next;
    LNode* next = p->next;
    p->next = NULL;
    while(next) {
        pre = p;
        p = next;
        next = p->next;
        p->next = pre;
    }
    list->next = p;
}
