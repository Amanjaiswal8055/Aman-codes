#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

#define INF INT_MAX

// Structure to represent an edge in the graph
struct Edge {
    int destination;
    int weight;
};

// Structure to represent a node in the graph
struct Node {
    int vertex;
    int key;
};

// Function prototypes
void primMST(const vector<vector<Edge>>& graph, int startVertex);

int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    vector<vector<Edge>> graph(V);

    cout << "Enter source, destination, and weight for each edge:\n";
    for (int i = 0; i < E; ++i) {
        int source, destination, weight;
        cin >> source >> destination >> weight;
        graph[source].push_back({destination, weight});
        graph[destination].push_back({source, weight});
    }

    int startVertex;
    cout << "Enter the starting vertex: ";
    cin >> startVertex;

    primMST(graph, startVertex);

    return 0;
}

// Function to perform Prim's algorithm for Minimum Spanning Tree
void primMST(const vector<vector<Edge>>& graph, int startVertex) {
    int V = graph.size();

    // Priority queue to store vertices that are being considered
    priority_queue<Node, vector<Node>, greater<Node>> pq;

    // Vector to store the parent of each vertex in the MST
    vector<int> parent(V, -1);

    // Vector to store the key (weight) of each vertex
    vector<int> key(V, INF);

    // Vector to store whether a vertex is included in MST or not
    vector<bool> inMST(V, false);

    // Insert the starting vertex into the priority queue and set its key to 0
    pq.push({startVertex, 0});
    key[startVertex] = 0;

    while (!pq.empty()) {
        // Extract the vertex with the minimum key
        int u = pq.top().vertex;
        pq.pop();

        // Include u in the MST
        inMST[u] = true;

        // Traverse all adjacent vertices of u
        for (const Edge& edge : graph[u]) {
            int v = edge.destination;
            int weight = edge.weight;

            // If v is not in MST and the weight of the edge is smaller than current key of v
            if (!inMST[v] && weight < key[v]) {
                // Update the key and parent of v
                key[v] = weight;
                parent[v] = u;

                // Push v into the priority queue
                pq.push({v, key[v]});
            }
        }
    }

    // Print the edges of the Minimum Spanning Tree
    cout << "Edges in the Minimum Spanning Tree:\n";
    for (int i = 1; i < V; ++i) {
        cout << parent[i] << " - " << i << " : " << key[i] << endl;
    }
}
