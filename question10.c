#include <stdio.h>

#define SIZE 10
int adj[SIZE][SIZE];
int visited[SIZE];

void dfs(int node, int n) {
    printf("%d ", node);
    visited[node] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[node][i] == 1 && !visited[i])
            dfs(i, n);
    }
}

int main() {
    int n = 5; // Number of nodes
    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[1][3] = adj[3][1] = 1;
    adj[2][4] = adj[4][2] = 1;

    printf("DFS starting from node 0: ");
    dfs(0, n);
    printf("\n");

    return 0;
}
