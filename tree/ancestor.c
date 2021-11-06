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

TreeNode_t* res;

bool ancestor_recur(TreeNode_t* root, TreeNode_t* p, TreeNode_t* q) {
    if(!root) return false;
    bool lres = ancestor_recur(root->left, p, q);
    bool rres = ancestor_recur(root->right, p, q);
    if(lres && rres) res = root;
    return lres || rres || root == p || root == q;
}

int main() {
    TreeNode_t* t = newTree(12);
    t->left = newTree(11);
    t->right = newTree(10);
    t->left->left = newTree(1);
    t->left->right = newTree(2);
    ancestor_recur(t, t->left->left, t->left->right);
    printf("%d\n", res->data);
    return 0;
}
