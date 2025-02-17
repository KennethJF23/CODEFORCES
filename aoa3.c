#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define INF INT_MAX
    
void printTable(int step, int V, int dist[], int parent[])
{
    printf("Step %d:\n", step);
    printf("    ");
    for (int i = 0; i < V; i++)
        printf("%d\t", i);
    printf("\n");
    printf("d   ");
    for (int i = 0; i < V; i++)
        if (dist[i] == INF)
            printf("∞\t");
        else
            printf("%d\t", dist[i]);
    printf("\n");
    printf("pi  ");
    for (int i = 0; i < V; i++)
        printf("%c\t", parent[i] == -1 ? 'N' : parent[i] + '0');
    printf("\n----------------------------------------\n");
}

int minDistance(int dist[], bool visited[], int V)
{
    int min = INF, min_index = -1;
    for (int v = 0; v < V; v++)
    {
        if (!visited[v] && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void dijkstra(int graph[][100], int V, int src)
{
    int dist[V];
    bool visited[V];
    int parent[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = INF;
        visited[i] = false;
        parent[i] = -1;
    }
    dist[src] = 0;
    
    printf("Initial State:\n");
    printTable(0, V, dist, parent);

    for (int count = 0; count < V - 1; count++)
    {
        int u = minDistance(dist, visited, V);
        if (u == -1) break;
        visited[u] = true;
        
        for (int v = 0; v < V; v++)
        {
            if (!visited[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
        printTable(count + 1, V, dist, parent);
    }

    printf("Final Shortest Distances:\n");
    for (int i = 0; i < V; i++)
    {
        printf("Shortest distance from %d to %d: %d\n", src, i, dist[i]);
    }
}

int main()
{   printf("NAME:KENNETH FERNANDES ROLL.NO:40 STD:S.E CMPN-A\n");
    int V, E;
    printf("Enter number of vertices: ");
    scanf("%d", &V);

    int graph[100][100] = {0};
    printf("Enter number of edges: ");
    scanf("%d", &E);

    printf("Enter edges in format (start_vertex end_vertex weight):\n");
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = w;
    }

    int source;
    printf("Enter source vertex: ");
    scanf("%d", &source);
    dijkstra(graph, V, source);

    return 0;
}