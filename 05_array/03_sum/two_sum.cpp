#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();

        for (int first = 0; first < size; first++) {
            for (int sec = first + 1; sec < size; sec++) {
                if (nums[first] + nums[sec] == target) {
                    return {first, sec}; // Return indices if target is found
                }
            }
        }
        return {}; // Return empty vector if no solution found
    }
};

int main() {
    Solution solution;

    // Example input
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Calling twoSum function
    vector<int> result = solution.twoSum(nums, target);

    // Displaying the result
    if (!result.empty()) {
        cout << "Indices of elements that sum up to " << target << " are: ";
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No two numbers found that sum up to " << target << "." << endl;
    }

    return 0;
}
