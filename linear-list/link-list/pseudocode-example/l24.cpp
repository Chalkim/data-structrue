/* find loop's entry */

LNode* func(LinkList list){
    LNode* fast = list, slow = list;
    while(slow && fast) {
        slow = slow->next;
        if(fast->next && fast->next->next)
            fast = fast->next->next;
        else
            return NULL;

        if(slow == fast){
            fast = list;
            break;
        }
    }
    while(slow != fast) {
        fast = fast->next;
    }
    return fast;
}
