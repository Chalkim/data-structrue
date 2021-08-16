void postOrder(Tree t){
    if(t != NULL){
        postOrder(t->left);
        postOrder(t->right);
        visit(t);
    }
}
