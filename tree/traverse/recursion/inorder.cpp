void inOrder(Tree t){
    if(t != NULL){
        inOrder(t->left);
        visit(t);
        inOrder(t->right);
    }
}
