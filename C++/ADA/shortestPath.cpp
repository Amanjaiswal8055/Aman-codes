#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

#define INF numeric_limits<int>::max()

// Structure to represent a weighted edge
struct Edge {
    int destination;
    int weight;
};

// Structure to represent a node in the graph
struct Node {
    int vertex;
    int distance;
};

// Comparator for priority queue
struct CompareDistance {
    bool operator()(const Node& n1, const Node& n2) {
        return n1.distance > n2.distance;
    }
};

// Function prototypes
void dijkstra(const vector<vector<Edge>>& graph, int source);

int main() {
    // Number of vertices and edges
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    // Graph representation
    vector<vector<Edge>> graph(V);

    // Input the graph
    cout << "Enter source, destination, and weight for each edge:\n";
    for (int i = 0; i < E; ++i) {
        int source, destination, weight;
        cin >> source >> destination >> weight;
        graph[source].push_back({destination, weight});
    }

    // Source vertex
    int source;
    cout << "Enter the source vertex: ";
    cin >> source;

    // Find single-source shortest paths
    dijkstra(graph, source);

    return 0;
}

// Dijkstra's algorithm to find single-source shortest paths
void dijkstra(const vector<vector<Edge>>& graph, int source) {
    int V = graph.size();

    // Priority queue to store vertices being processed
    priority_queue<Node, vector<Node>, CompareDistance> pq;

    // Vector to store distances from source vertex
    vector<int> distance(V, INF);

    // Insert source vertex into priority queue and initialize its distance as 0
    pq.push({source, 0});
    distance[source] = 0;

    // Process vertices until priority queue becomes empty
    while (!pq.empty()) {
        int u = pq.top().vertex;
        pq.pop();

        // Traverse all adjacent vertices of u
        for (const Edge& edge : graph[u]) {
            int v = edge.destination;
            int weight = edge.weight;

            // Update distance if relaxation is possible
            if (distance[u] != INF && distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
                pq.push({v, distance[v]});
            }
        }
    }

    // Print shortest distances from source vertex
    cout << "Shortest distances from source vertex " << source << ":\n";
    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << ": ";
        if (distance[i] == INF) {
            cout << "INF" << endl;
        } else {
            cout << distance[i] << endl;
        }
    }
}
