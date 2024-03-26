#include <iostream>
#include <list>
#include <vector>

using namespace std;

// Class representing a graph
class Graph {
    int V; // Number of vertices
    vector<list<int>> adj; // Adjacency list representation

public:
    Graph(int V) : V(V), adj(V) {}

    // Function to add an edge to the graph
    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }

    // Recursive function to perform DFS traversal
    void DFSUtil(int v, vector<bool>& visited) {
        // Mark the current vertex as visited
        visited[v] = true;
        cout << v << " ";

        // Recur for all vertices adjacent to this vertex
        for (auto it = adj[v].begin(); it != adj[v].end(); ++it) {
            if (!visited[*it]) {
                DFSUtil(*it, visited);
            }
        }
    }

    // Function to perform DFS traversal starting from a given vertex
    void DFS(int v) {
        // Mark all vertices as not visited
        vector<bool> visited(V, false);

        // Call the recursive helper function to perform DFS traversal
        DFSUtil(v, visited);
    }
};

int main() {
    // Create a graph
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);

    cout << "Depth First Traversal (starting from vertex 0): ";
    g.DFS(0);
    cout << endl;

    return 0;
}
