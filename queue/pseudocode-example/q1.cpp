typedef struct{
    int data[MAXSIZE];
    int tag = 0;
    int front = 0;
    int rear = 0;
}*Queue;

bool enQueue(Queue* q, int x){
   if(tag == 1 && q->front == q->rear) return false;
   q->data[q->rear] = x;
   q->rear = (q->rear + 1) % MAXSIZE;
   q->tag = 1;
   return true;
}

int deQueue(Queue* q){
    if(tag == 0 && q->front == q->rear) return false;
    int x = q->data[q->front];
    q->front = (q->front - 1) % MAXSIZE;
    q->tag = 0;
    return x;
}
