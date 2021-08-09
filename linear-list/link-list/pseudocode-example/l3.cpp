void printIgnoreHead(LinkList *list){
    if(list->next) printReverse(list->next);
}

void printReverse(LNode* p){
    if(p == NULL) return;
    printReverse(p->next);
    printf("%d", p->data);
}
