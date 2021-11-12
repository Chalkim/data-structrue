void bfs(TreeNode* root) {
    Queue<TreeNode*> q;
    if(!root) return;
    q.push(root);
    while(!q.isEmpty()) {
        int currentWidth = q.size();
        for(int i = 0; i < currentWidth; ++i) {
            TreeNode* p = q.deQuque();
            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }
    }
}
