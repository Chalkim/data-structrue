#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include "string.h"

typedef struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} Tree;

Tree *NewNode(int val)
{
    Tree *t = (Tree *)malloc(sizeof(struct TreeNode));
    t->val = val;
    return t;
}

struct Frame
{
    Tree *node = nullptr;
    int CodeBlock = 0;
};

void PreOrder(Tree *t)
{
    std::stack<Frame> RuntimeStack;
    RuntimeStack.push({t});
    while (!RuntimeStack.empty())
    {
        Frame &now = RuntimeStack.top();
        switch (now.CodeBlock)                           // void inorder_recur(TreeNode *root, vector<int> &vi) {
        {                                                //     // code block 0
        case 0:                                          //     if (root != nullptr) {
            if(now.node != nullptr) {                    //         // code block o
                RuntimeStack.push({now.node->left});     //         inorder_recur(root->left, vi);
                printf("%d ", now.node->val);            //         vi.push_back(root->val);
                ++now.CodeBlock;                         //         // code block 1
            } else {                                     //         inorder_recur(root->right, vi);
                RuntimeStack.pop();                      //     }
            }                                            // }
            break;
        case 1:
            RuntimeStack.push({now.node->right});
            ++now.CodeBlock;
            break;
        case 2:
            RuntimeStack.pop();
            break;
        default:
            break;
        }
    }
}

int main()
{
    Tree *t = NewNode(12);
    t->left = NewNode(7);
    t->right = NewNode(9);
    t->left->left = NewNode(2);
    t->left->right = NewNode(3);
    t->right->left = NewNode(1);

    PreOrder(t);
    return 0;
}
