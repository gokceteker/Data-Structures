#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 10

// Graf yapısı (Adjacency Matrix)
int adj[MAX_NODES][MAX_NODES];
int visited[MAX_NODES];
int n; // Düğüm sayısı

// DFS kullanarak bir kümeyi (cluster) keşfetme
void findCluster(int v, int clusterID) {
    visited[v] = 1;
    printf("%d ", v); // Küme içindeki düğümü yazdır

    for (int i = 0; i < n; i++) {
        // Eğer bir bağ varsa ve düğüm daha önce ziyaret edilmemişse
        if (adj[v][i] == 1 && !visited[i]) {
            findCluster(i, clusterID);
        }
    }
}

// Tüm grafı kümelere ayırma işlemi
void performClustering() {
    int clusterCount = 0;

    printf("--- Graph Clustering Results ---\n");
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            clusterCount++;
            printf("Cluster %d: { ", clusterCount);
            findCluster(i, clusterCount);
            printf("}\n");
        }
    }
    printf("Total Clusters Found: %d\n", clusterCount);
}

int main() {
    // Örnek Senaryo: 6 Düğüm
    // Cluster 1: 0-1-2
    // Cluster 2: 3-4
    // Cluster 3: 5 (İzole Düğüm)
    n = 6;

    // Tüm matrisi sıfırla
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = 0;

    // Cluster 1 Kenarları
    adj[0][1] = adj[1][0] = 1;
    adj[1][2] = adj[2][1] = 1;

    // Cluster 2 Kenarları
    adj[3][4] = adj[4][3] = 1;

    // Kümeleme işlemini başlat
    performClustering();

    return 0;
}
