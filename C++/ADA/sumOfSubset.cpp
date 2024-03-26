#include <iostream>
#include <vector>

using namespace std;

// Function to check if there is a subset with the given sum
bool isSubsetSum(const vector<int>& arr, int sum) {
    int n = arr.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    // Initialize the first column as true (sum = 0)
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = true;
    }

    // Fill the dp table
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= sum; ++j) {
            // If the current element is greater than the current sum, exclude it
            if (arr[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            }
            // Otherwise, check if there is a subset that forms the sum
            else {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            }
        }
    }

    // The bottom-right cell will contain the result
    return dp[n][sum];
}

int main() {
    int n;
    cout << "Enter the number of elements in the set: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the set:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum;
    cout << "Enter the sum to check for: ";
    cin >> sum;

    if (isSubsetSum(arr, sum)) {
        cout << "There exists a subset with the given sum.\n";
    } else {
        cout << "There is no subset with the given sum.\n";
    }

    return 0;
}
