void levelQrder(Tree t) {
    Queue q;
    TreeNode* p;
    enQueue(q, t);    // enqueue root
    while(!IsEmplty(q)) {
        deQueue(q, p);
        visit(p);
        if(p->left != NULL)
            enQueue(Q, p->left);
        if(p->right != NULL)
            enQueue(Q, p->right);
    }
}
