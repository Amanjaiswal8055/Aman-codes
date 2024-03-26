#include <iostream>
#include <vector>
#include <limits>

using namespace std;

void findMaxAndMin(const vector<int>& nums, int& maxVal, int& minVal) {
    maxVal = numeric_limits<int>::min();
    minVal = numeric_limits<int>::max();

    for (int num : nums) {
        if (num > maxVal) {
            maxVal = num;
        }
        if (num < minVal) {
            minVal = num;
        }
    }
}

int main() {
    vector<int> nums = {10, 5, 8, 3, 12, 7, 2, 15};

    int maxVal, minVal;

    findMaxAndMin(nums, maxVal, minVal);

    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;

    return 0;
}
