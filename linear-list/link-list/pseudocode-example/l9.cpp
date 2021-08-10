void printAsc(LinkList list){
    p = list;
    LNode* preMin = list;
    LNode* min = list->next;
    while(list->next) {
        while(p->next) {
            if(p->next->data < min->data){
                preMin = p;
                min = p->next;
            }
            p = p->next;
        }
        printf("%d", min->data);
        preMin->next = p->next;
        free(min);
    }
}
