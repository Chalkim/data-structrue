int func(LinkList list, int n){
    Node* p = list->next;
    Stack* s = malloc(sizeof(stack_t));
    for(int i = 0; i < n/2; i++, p = p->next)
        push(s, p->data);
    if(n % 2 == 1) p = p->next;
    while(p) {
        if(pop(s) != p->data) return 0;
        p = p->next;
    }
    return 1;
}
