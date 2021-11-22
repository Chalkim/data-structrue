#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct TreeNode{
    struct TreeNode* left;
    struct TreeNode* right;
    int data;
}TreeNode_t;

TreeNode_t* newTree(int data) {
    TreeNode_t* t = malloc(sizeof(TreeNode_t));
    t->data = data;
    t->left = NULL; t->right = NULL;
    return t;
}

bool similar(TreeNode_t* p, TreeNode_t* q) {
    if(!p && !q) return true;
    if((p && !q)
    || (!p && q)
    ) return false;

    bool ls = false, rs = false;
    ls = similar(p->left, q->left);
    rs = similar(p->right, q->right);
    return ls && rs;
}

int main() {
    TreeNode_t* t = newTree(12);
    t->left = newTree(11);
    t->right = newTree(10);
    t->right->left = newTree(102);
    t->left->left = newTree(1);
    t->left->right = newTree(2);
    TreeNode_t* s = newTree(12);
    s->left = newTree(11);
    s->right = newTree(10);
    s->right->left = newTree(102);
    s->left->left = newTree(1);
    s->left->right = newTree(2);
    if(similar(t, s)) printf("similar!\n");
    return 0;
}
