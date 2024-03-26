#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

// Function to calculate the Euclidean distance between two cities
double distance(pair<int, int> a, pair<int, int> b) {
    return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
}

// Function to find the nearest neighbor of a city
int nearestNeighbor(int currentCity, const vector<pair<int, int>>& cities, vector<bool>& visited) {
    double minDist = INF;
    int nearestCity = -1;

    for (int i = 0; i < cities.size(); ++i) {
        if (!visited[i] && i != currentCity) {
            double dist = distance(cities[currentCity], cities[i]);
            if (dist < minDist) {
                minDist = dist;
                nearestCity = i;
            }
        }
    }

    return nearestCity;
}

// Function to solve the Traveling Salesman Problem using the nearest neighbor algorithm
void tspNearestNeighbor(const vector<pair<int, int>>& cities) {
    int numCities = cities.size();

    vector<bool> visited(numCities, false); // Mark all cities as not visited

    int currentCity = 0; // Start from the first city
    visited[currentCity] = true; // Mark the first city as visited

    double totalDistance = 0; // Initialize the total distance traveled

    cout << "Path: " << currentCity + 1 << " "; // Print the starting city

    for (int i = 0; i < numCities - 1; ++i) {
        int nearestCity = nearestNeighbor(currentCity, cities, visited);
        visited[nearestCity] = true;
        cout << nearestCity + 1 << " "; // Print the next city in the path
        totalDistance += distance(cities[currentCity], cities[nearestCity]);
        currentCity = nearestCity;
    }

    // Return to the starting city
    totalDistance += distance(cities[currentCity], cities[0]);
    cout << "1"; // Print the starting city to complete the cycle

    cout << "\nTotal distance: " << totalDistance << endl;
}

int main() {
    // Example cities represented by their (x, y) coordinates
    vector<pair<int, int>> cities = {{0, 0}, {1, 2}, {3, 1}, {2, 3}, {1, 0}};

    // Solve the Traveling Salesman Problem using the nearest neighbor algorithm
    tspNearestNeighbor(cities);

    return 0;
}
