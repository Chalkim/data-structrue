void preOrder(Tree t) {
    Stack* S;
    TreeNode* p = t;
    while(p || !isEmpty(S)) {
        if(p) {
            visit(p);
            push(S, p);
            p = p->left;
        } else {
            pop(S, p);
            p = p->right;
        }
    }
}
