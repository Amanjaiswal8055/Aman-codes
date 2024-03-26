#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent items
struct Item {
    int weight;
    int value;
};

// Function to solve 0/1 Knapsack problem
int knapsack(int W, const vector<Item>& items, int n) {
    // Create a table to store the maximum value that can be obtained
    // for each subproblem, given the first i items and a knapsack of
    // capacity j.
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    // Fill the dp table
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= W; ++j) {
            // If the current item's weight is more than the current
            // capacity, then this item cannot be included in the knapsack
            if (items[i - 1].weight > j) {
                dp[i][j] = dp[i - 1][j];
            }
            // Otherwise, consider including the item, and check if it
            // improves the value of the knapsack
            else {
                dp[i][j] = max(dp[i - 1][j], items[i - 1].value + dp[i - 1][j - items[i - 1].weight]);
            }
        }
    }

    // The result is stored at the bottom-right corner of the dp table
    return dp[n][W];
}

int main() {
    int W; // Capacity of the knapsack
    cout << "Enter the capacity of the knapsack: ";
    cin >> W;

    int n; // Number of items
    cout << "Enter the number of items: ";
    cin >> n;

    vector<Item> items(n);
    cout << "Enter weight and value of each item:\n";
    for (int i = 0; i < n; ++i) {
        cin >> items[i].weight >> items[i].value;
    }

    // Solve the 0/1 knapsack problem
    int maxValue = knapsack(W, items, n);
    cout << "The maximum value that can be obtained: " << maxValue << endl;

    return 0;
}
