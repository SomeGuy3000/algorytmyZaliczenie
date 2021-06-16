#include <limits.h>
#include <stdio.h>
#include <cstdio>
#include <vector>


int minDistance(int dist[], bool sptSet[], int size)
{
    int min = INT_MAX, min_index = NULL;

    for (int v = 0; v < size; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

void printSolution(int dist[], int size)
{
    printf("Wierzcholek \t\t odleglosc od zrodla\n");
    for (int i = 0; i < size; i++)
        printf("%d \t\t %d\n", i, dist[i]);
}

void dijkstra(int** graph, int size, int start = 0)
{
    int* dist = new int[size];

    bool* sptSet = new bool[size];

    for (int i = 0; i < size; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    dist[start] = 0;

    for (int count = 0; count < size - 1; count++) {

        int u = minDistance(dist, sptSet, size);

        sptSet[u] = true;

        for (int v = 0; v < size; v++)

            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    //printSolution(dist, size);
}

void bfs(int** graph, int size) {

    int* tab = new int[size];
    int a = 0;
    int b = 0;

    for (int i = 0; i < size; i++)
        if (graph[0][i] > 0) {
            tab[a] = i;
            a += 1;
        }
    for (int i = 0; i < size; i++) {
        for (int i = b; i < a; i++) {
            if (tab[i] > 0) {
                for (int x = tab[i] + 1; x < size; x++) {
                    if (graph[tab[i]][x] > 0) {
                        if (linearSearch(tab, size, x) < 0) {
                            tab[a] = x;
                            a += 1;
                        }
                    }
                }
            }
            b = a;
        }
    }
}

void dfs(int** graph, int size, int start = 0) {
    if (graph[start][0] != -1) {
        for (int i = start; i < size - start; i++) {
            if (graph[start][i] > 0) {
                if (i == 0) {
                    graph[start][i] = -1;
                }
                dfs(graph, size, i);
            }
        }
    }  
}