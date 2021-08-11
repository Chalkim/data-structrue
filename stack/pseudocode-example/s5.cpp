#define MAXSIZE 50;

typedef struct{
    int data[MAXSIZE];
    int top[2];
} *muxStack;

bool isEmpty(muxStack* stack, int index){
    switch(index){
        case 0:
            return stack.top[0] == 0;
        case 1:
            return stack.top[1] == MAXSIZE - 1;
        default:
            return false;
    }
}

bool isFull(muxStack* stack){
    return top[1] - top[0] == 1;
}

bool push(muxStack* stack, int index, int elem) {
    if(!isFull(stack)) {
        switch(index){
            case 0: {
                stack.top[0]++;
                stack.data[top[0]] = elem;
                return true;
            }
            case 1: {
                stack.top[1]--;
                stack.data[top[1]] = elem;
                return true;
            }
        }
    }
}

int pop(muxStack* stack, int index) {
    if(!isEmpty(stack, index)){
        switch(index){
            case 0:
                return stack.data[top[0]--];
            case 1:
                return stack.data[top[1]++];
        }
    }
    printf("pop empty stack!");
    return 0;
}
