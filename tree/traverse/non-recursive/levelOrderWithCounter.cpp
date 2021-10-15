void levelOrderWithCounter(Tree t) {
    TreeNode* p;
    TreeNode* lastNode = t;
    TreeNode* newLastNode = t;
    int level;
    Queue<TreeNode*> q;

    q.enqueue(t);
    while(!q.empty()) {
        p = q.dequeue(); visit(p);
        level = 1;
        if(p->left != nullptr) {
            q.enqueue(p->left);
            newLastNode = p->left;
        }
        if(p->right != nullptr) {
            q.enqueue(p->right);
            newLastNode = p->right;
        }
        if(p == lastNode) {
            ++level;
            lastNode = newLastNode;
        }
    }
}
