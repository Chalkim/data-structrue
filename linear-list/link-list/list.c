#include <stdlib.h>
#include <stdio.h>

typedef int ElemType;

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;

LinkList linklistInit(){
    LinkList list = malloc(sizeof(LNode));  // malloc head node
    list->next = NULL;
    return list;
}

void linklistHeadInsert(LinkList list, ElemType* elements, int size){
    for(int i = 0; i < size; i++){
        LNode* newNode = malloc(sizeof(LNode));
        newNode->data = elements[i];
        newNode->next = list->next;
        list->next = newNode;
    }
}

void linklistTailInsert(LinkList list, ElemType* elements, int size){
    LNode* tail = list;
    for(int i = 0; i < size; i++){
        LNode* newNode = malloc(sizeof(LNode));
        newNode->data = elements[i];
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
}

LNode* linklistGetElementByIndex(LinkList list, int i){
    if(i<1) return list;

    LNode* p = list->next;
    for(int j = 1; j < i; j++){
        if(p->next) p=p->next;
        else return NULL;
    }
    return p;
}

LNode* linklistGetElementByValue(LinkList list, ElemType value){
    LNode* p = list->next;
    while(p!=NULL && p->data!=value)
        p = p->next;

    return p;
}

// TODO: InsertByIndex
void linklistInsertByIndex(LinkList list, int i, ElemType value){}

// TODO: DeleteByIndex
void linklistDeleteByIndex(LinkList list, int i){}

// TODO: GetLength
int linklistGetLength(LinkList list){}

void printLinkList(LinkList list){
    printf("======== START OF LIST PRINT ========\n");
    printf("Data: H -> ");
    LNode* tmp = list->next;
    while(tmp){
        printf("%d -> ", tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
    printf("======== END OF LIST PRINT ========\n");
}

int main() {
    LinkList test = linklistInit();
    ElemType insertHead[] = {1, 2, 3};
    linklistHeadInsert(test, insertHead, sizeof(insertHead)/sizeof(ElemType));
    printLinkList(test);

    ElemType insertTail[] = {4, 5, 6};
    linklistTailInsert(test, insertTail, sizeof(insertTail)/sizeof(ElemType));
    printLinkList(test);

    int index = 3;
    printf("Value of the node which index is '%d': %d\n", index, linklistGetElementByIndex(test, index)->data);

    int value = 5;
    printf("Next of the node which value is '%d': %d\n", value, linklistGetElementByValue(test, value)->next->data);
    return 0;
}
