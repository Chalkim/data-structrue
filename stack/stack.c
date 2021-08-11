#define MAXSIZE 50;

typedef int ElementType;
typedef struct stack{
    ElementType data[MAXSIZE];
    int top;
} SqStack;

// TODO init a empty stack
SqStack* sqStackInit(){}

// TODO is empty?
int sqStackIsEmpty(SqStack* stack){}

// TODO push
int sqStackPush(SqStack* stack, int x){}

// TODO pop
int sqStackPop(SqStack* stack){}

// TODO get top
int sqStackGetTop(SqStack* stack){}

// TODO destroy
int sqStackDestroy(SqStack* stack){}
