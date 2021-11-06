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

bool isLeaf(TreeNode_t* root) {
    if(!root) return false;
    return !root->left && !root->right;
}

TreeNode_t* rear;

void linkLeaf(TreeNode_t* root) {
    if(!root) return;
    linkLeaf(root->left);
    linkLeaf(root->right);
    if(isLeaf(root)) {
        rear->right = root;
        rear = root;
    }
}

int main() {
    TreeNode_t* t = newTree(12);
    t->left = newTree(11);
    t->right = newTree(10);
    t->left->left = newTree(1);
    t->left->right = newTree(2);
    TreeNode_t* head = newTree(-1);
    rear = head;
    linkLeaf(t);
    while(head) {
        printf("%d->", head->data);
        head = head->right;
    }
    printf("NULL\n");
    return 0;
}

