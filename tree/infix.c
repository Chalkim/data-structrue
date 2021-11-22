/*
 * print the expression tree as an infix expression
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    char data[10];
    struct node *left, *right;
} BTree;

BTree* newNode(char data) {
    BTree* t = malloc(sizeof(struct node));
    t->data[0] = data;
    t->left = NULL;
    t->right = NULL;
    return t;
}

/*
 * test whether it is a leaf node
 */
bool isLeaf(BTree* node) {
    if(!node) return false;
    return !node->left && !node->right;
}

/*
 * print tree as an infix expression
 */
void printBTree(BTree* root, bool bracket) {
    if(!root) return;
    bool lb = true, rb = true;
    if(isLeaf(root->left)) lb=false;
    if(isLeaf(root->right)) rb=false;
    if(bracket) printf("(");
    printBTree(root->left, lb);
    printf("%s", root->data);
    printBTree(root->right, rb);
    if(bracket) printf(")");
}

int main() {
    BTree* m = newNode('*');
    m->left = newNode('+');
    m->left->left = newNode('a');
    m->left->right = newNode('b');
    m->right = newNode('*');
    m->right->left = newNode('c');
    m->right->right = newNode('-');
    m->right->right->right = newNode('d');
    printBTree(m, false);
    printf("\n");
    BTree* n = newNode('+');
    n->left = newNode('*');
    n->left->left = newNode('a');
    n->left->right = newNode('b');
    n->right = newNode('-');
    n->right->right = newNode('-');
    n->right->right->left = newNode('c');
    n->right->right->right = newNode('d');
    printBTree(n, false);
    printf("\n");
    return 0;
}
