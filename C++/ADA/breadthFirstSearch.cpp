#include <iostream>
#include <list>
#include <queue>
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

    // Function to perform BFS traversal starting from a given vertex
    void BFS(int v) {
        // Mark all vertices as not visited
        vector<bool> visited(V, false);

        // Create a queue for BFS
        queue<int> q;

        // Mark the current vertex as visited and enqueue it
        visited[v] = true;
        q.push(v);

        // Iterator to traverse adjacency list
        list<int>::iterator it;

        while (!q.empty()) {
            // Dequeue a vertex from the queue and print it
            v = q.front();
            cout << v << " ";
            q.pop();

            // Get all adjacent vertices of the dequeued vertex v.
            // If an adjacent vertex has not been visited, then mark it
            // visited and enqueue it.
            for (it = adj[v].begin(); it != adj[v].end(); ++it) {
                if (!visited[*it]) {
                    visited[*it] = true;
                    q.push(*it);
                }
            }
        }
    }
};

int main() {
    // Create a graph
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);

    cout << "Breadth First Traversal (starting from vertex 0): ";
    g.BFS(0);
    cout << endl;

    return 0;
}
