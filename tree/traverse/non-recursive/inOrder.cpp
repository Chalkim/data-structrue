void inOrder(Tree t) {
    Stack* S;
    TreeNode* p = t;
    while(p || !isEmpty(S)) {
        if(p) {
            push(S, p);
            p = p->left;
        } else {
            pop(S, p);
            visit(p);
            p = p->right;
        }
    }
}
