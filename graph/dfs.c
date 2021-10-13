#define MAX_VEX_NUM

bool visited[MAX_VEX_NUM] = { false };
Queue<Vex> Q;

void visit(int v);

void DFSTraverse(Graph G) {
    for(int v = 0; v < G.vexnum; ++v) {
        if(!visited[v]) {
            DFS(G, v);
        }
    }
}

void DFS(Graph G, int v) {
    visit(v);
    visited[v] = true;
    for(int w=FirstNeighbor(G, v); w>=0; w=NextNeighbor(G, v, w)) {
        if(!visited[w]) {
            DFS(G, w);
        }
    }
}
