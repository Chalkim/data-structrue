/*
 * 2017
 * */

typedef struct node {
    char data[10];
    struct node *left, *right;
}

void printInfixWorker(Tree t) {
    int isLeaf = (t->left || t->right) ? 0 : 1;
    if(!isLeaf) printf("(");
    if(t->left)
        printInfixWorker(t->left);
    printf("%s", t->data);
    if(t->right)
        printInfixWorker(t->right);
    if(!isLeaf) printf(")");
}

void printInfix(Tree t){
    if(t->left)
        printInfixWorker(t->left);
    printf("%s", t->data);
    if(t->right)
        printInfixWorker(t->right);
}
