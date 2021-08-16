void preOrder(Tree t){
    if(t != NULL){
        visit(t);
        preOrder(t->left);
        preOrder(t->right);
    }
}
