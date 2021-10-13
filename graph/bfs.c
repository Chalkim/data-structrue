#define MAX_VEX_NUM

bool visited[MAX_VEX_NUM] = { false };
Queue<Vex> Q;

void visit(int v);

void BFSTraverse(Graph G) {
    for(int i = 0; i < G.vexnum; ++i) {
        if(!visited[i]) {
            BFS(G, i);
        }
    }
}

void BFS(Graph G, int v) {
    visit(v);
    visited[v] = true;
    enqueue(Q, v);
    while(!isEmpty(Q)) {
        dequeue(Q, v);
        for(int w=FirstNeighbor(G, v); w>=0; w=NextNeighbor(G,v,w)) {
            if(!visited[w]) {
                visit(w);
                visited[w] = true;
                enqueue(Q, w);
            }
        }
    }
}
