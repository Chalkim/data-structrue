/*
 * 2019
 * */

typedef struct node{
    int data;
    struct node* next;
}NODE

void func(LinkList list){
    NODE* p = list, q = list;
    while(p->next && q->next && q->next->next){
        p = p->next;
        q = q->next->next;
    }
    NODE* r = malloc(sizeof(NODE));
    r->next = NULL;
    while(p){
        NODE* tmp = r->next;
        r->next = p;
        r->next->next = tmp;
        p = p->next;
    }
    q = list->next;
    r = list->next;
    while(q){
        NODE* tmp = q->next;
        q->next = r;
        r = r->next;
        q->next->next = tmp;
        q = tmp;
    }
}
