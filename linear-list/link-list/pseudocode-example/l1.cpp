LNode* deleteByValue(LNode* L, int x){
    if(L == NULL) return L;
    if(L->data == x) {
        LNode* next = L->next;
        free(L);
        return deleteByValue(next, x);
    }

    L->next = deleteByValue(L->next, x);
    return L;
}
