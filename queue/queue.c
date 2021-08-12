#define MAXSIZE 50

typedef int ElementType;
typedef struct SqQueue{
    ElementType data[MAXSIZE];
    int front, rear;
} SqQueue;

SqQueue* sqQueueInit(){
    SqQueue* tmp = malloc(sizeof(struct SqQueue));
    tmp->front = 0;
    tmp->rear = 0;
    return tmp;
}

bool sqQueueIsEmpty(SqQueue* queue){
    return queue->front == queue->rear;
}

bool sqQueueIsFull(SqQueue* queue){
    return (queue->rear + 1) % MAXSIZE == queue->front;
}

// TODO enQueue and deQueue
bool sqQueueEnQueue(SqQueue* queue, ElementType x){}

bool sqQueueDeQueue(SqQueue* queue){}

ElementType sqQueueGetHead(SqQueue* queue){}
