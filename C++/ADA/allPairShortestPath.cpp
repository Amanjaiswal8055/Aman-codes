#include <iostream>
#include <vector>
#include <climits>

using namespace std;

#define INF INT_MAX

// Function to find all pair shortest paths
void floydWarshall(vector<vector<int>>& graph, int V) {
    // Initialize the distance matrix with the given graph
    vector<vector<int>> dist = graph;

    // Apply the Floyd-Warshall algorithm
    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                // If vertex k is on the shortest path from i to j,
                // then update the value of dist[i][j]
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Print the shortest distances
    cout << "Shortest distances between every pair of vertices:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (dist[i][j] == INF) {
                cout << "INF ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int V; // Number of vertices
    cout << "Enter the number of vertices: ";
    cin >> V;

    // Create the adjacency matrix for the graph
    vector<vector<int>> graph(V, vector<int>(V));

    cout << "Enter the adjacency matrix for the graph:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cin >> graph[i][j];
            // If there is no edge from vertex i to j, set distance as INF
            if (graph[i][j] == 0 && i != j) {
                graph[i][j] = INF;
            }
        }
    }

    // Find all pair shortest paths
    floydWarshall(graph, V);

    return 0;
}
