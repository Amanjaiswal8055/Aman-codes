#include <iostream>
#include <vector>

using namespace std;

const int V = 5; // Number of vertices

// Function to check if the current vertex can be added to the Hamiltonian Cycle
bool isSafe(int v, const vector<vector<int>>& graph, vector<int>& path, int pos) {
    if (graph[path[pos - 1]][v] == 0) {
        return false; // There is no edge between the last vertex in the path and the current vertex
    }

    // Check if the vertex has been already included in the path
    for (int i = 0; i < pos; ++i) {
        if (path[i] == v) {
            return false;
        }
    }

    return true;
}

// Function to solve the Hamiltonian Cycle problem using backtracking
bool hamiltonianCycleUtil(const vector<vector<int>>& graph, vector<int>& path, int pos) {
    // If all vertices are included in the Hamiltonian Cycle
    if (pos == V) {
        // Check if there is an edge from the last vertex to the first vertex
        if (graph[path[pos - 1]][path[0]] == 1) {
            return true; // Hamiltonian Cycle found
        } else {
            return false; // No Hamiltonian Cycle exists
        }
    }

    // Try different vertices as the next candidate in the Hamiltonian Cycle
    for (int v = 1; v < V; ++v) {
        if (isSafe(v, graph, path, pos)) {
            path[pos] = v; // Add the vertex to the path

            // Recursively try the next vertex
            if (hamiltonianCycleUtil(graph, path, pos + 1)) {
                return true; // Hamiltonian Cycle found
            }

            // If adding vertex v doesn't lead to a solution, backtrack
            path[pos] = -1;
        }
    }

    return false; // No Hamiltonian Cycle exists
}

// Function to solve the Hamiltonian Cycle problem
void hamiltonianCycle(const vector<vector<int>>& graph) {
    vector<int> path(V, -1); // Initialize path as empty

    // The first vertex is always 0 in Hamiltonian Cycle
    path[0] = 0;

    // Try to find the Hamiltonian Cycle starting from vertex 0
    if (hamiltonianCycleUtil(graph, path, 1)) {
        cout << "Hamiltonian Cycle found: ";
        for (int vertex : path) {
            cout << vertex << " ";
        }
        cout << path[0] << endl;
    } else {
        cout << "No Hamiltonian Cycle exists.\n";
    }
}

int main() {
    // Example graph represented by an adjacency matrix
    vector<vector<int>> graph = {
        {0, 1, 0, 1, 0},
        {1, 0, 1, 1, 1},
        {0, 1, 0, 0, 1},
        {1, 1, 0, 0, 1},
        {0, 1, 1, 1, 0}
    };

    // Solve the Hamiltonian Cycle problem for the given graph
    hamiltonianCycle(graph);

    return 0;
}
