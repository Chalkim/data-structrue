/*
 * 2015
 * */

void func(LinkList list){
    int present[n+1] = {0};
    LNode* pre = list;
    LNode* p = list->next;

    while(p){
        if(present[abs(p->data)] == 0) {
            present[abs(p->data)] = 1;
            pre = p; p = p->next;
        } else {
            pre->next = p->next;
            free(p);
            p = pre->next;
        }
    }
}
