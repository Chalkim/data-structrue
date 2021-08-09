void asc(LinkList* list){
    if(list || 
       list->next || 
       list->next->next) 
       return;

    LNode* sorted = list;
    LNode* remain = list->next->next;
    list->next->next = NULL;

    while(remain){
        LNode* pre = sorted;
        LNode* next_remain = remain->next;
        while(pre->next!=NULL && pre->next->data < remain->data)
            pre->pre->next;
        pre->next = p;
        remain->next = pre->next;
        remain = next_remain;
    }
}
