#include <stdlib.h>
#include <stdio.h>

#define MAXSIZE 50  // static size
typedef int ElemType;

typedef struct
{
    ElemType data[MAXSIZE];
    int length;
}SqList;

SqList* sqListInit(){
    SqList* list = malloc(sizeof(SqList));
    list->length=0;
    return list;
}

/* return 1 when initial success 
   return 0 when initial fail */
int sqListInsert(SqList* list, int i, ElemType element){
    if(i < 1 || i > list->length+1)
        return 0;
    if(list->length >= MAXSIZE)
        return 0;

    for(int j=list->length; j>=i; j--)
        list->data[j] = list->data[j-1];

    list->data[i-1] = element;
    list->length++;
    return 1;
}

/* return deleted element */
ElemType sqListDelete(SqList* list, int i){
    if(i<1||i>list->length)
        return 0;
    ElemType tmp = list->data[i-1];
    for(int j=i; j<list->length; j++)
        list->data[j-1] = list->data[j];
    list->length--;
    return tmp;
}

int sqListLocateByValue(SqList* list, ElemType element){
    for(int i=0; i<list->length; i++) {
        if(list->data[i] == element) {
            return ++i;
        }
    }
    return 0;
}

void printSqList(SqList* list){
    printf("======== START OF LIST PRINT ========\n");
    printf("Length: %d\n", list->length);
    printf("Data: ");
    if(list->length == 0) printf(">>>NO DATA<<<");
    for(int i = 0; i < list->length; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
    printf("======== END OF LIST PRINT ========\n");
}

int main(){
    SqList* test = sqListInit();
    sqListInsert(test, 1, 32);
    sqListInsert(test, 1, 24);
    sqListInsert(test, 1, 84);
    sqListInsert(test, 2, 51);
    sqListInsert(test, 3, 2);
    printSqList(test);
    sqListDelete(test, 2);
    printSqList(test);
    int locateElement = 24;
    printf("Locate of '%d': %d\n", locateElement, sqListLocateByValue(test, locateElement));

    return 0;
}