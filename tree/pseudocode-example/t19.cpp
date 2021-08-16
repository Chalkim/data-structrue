/*
 * 2014
 * */

int WPL(Tree t){
    return WPL-worker(t, 0);
}

int WPL-worker(Tree t, int length){
    if(!t)                              // t not exist
        return 0;
    if(!t->left && !t->right)           // t is a leaf node
        return t->weight * length;
    else                                // t is non-leaf node
        return WPL(t->left, length + 1) + WPL(t->right, length + 1);
}
