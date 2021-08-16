void postOrder(Tree t) {
    Stack* S;
    TreeNode* p = t;
    r = NULL;
    while(p || !isEmpty(S)) {
        if(p) {
            push(S, p);
            p = p->left;
        } else {
            Top(S, p);
            if(p->right && p->right != r)
                p = p->right;
            else {
                pop(S, p);
                visit(p);
                r = p;
                p = NULL;
            }
        }
    }
}
