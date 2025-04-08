#include <iostream>
#include <vector>
#include <algorithm> // For sort(), max_element(), min_element(), reverse()
#include <numeric>   // For accumulate()
#include <unordered_map>

using namespace std;

int main() {
    // ✅ 1. DECLARATION & INITIALIZATION
    int arr[] = {10, 20, 30, 40, 50}; // Fixed-size array
    vector<int> vec = {7, 1, 5, 3, 6, 4}; // Dynamic array (vector)
    int size = sizeof(arr) / sizeof(arr[0]); // Finding array size

    cout << "Array size: " << size << endl;
    cout << "Vector size: " << vec.size() << endl;

    // ✅ 2. TRAVERSING ARRAYS
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Vector elements: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // ✅ 3. UPDATING ELEMENTS
    vec[1] = 50; // Change second element
    cout << "Updated Vector: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // ✅ 4. SORTING
    sort(vec.begin(), vec.end());
    cout << "Sorted Vector: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // ✅ 5. FINDING MAXIMUM & MINIMUM
    int maxElement = *max_element(vec.begin(), vec.end());
    int minElement = *min_element(vec.begin(), vec.end());
    cout << "Max Element: " << maxElement << ", Min Element: " << minElement << endl;

    // ✅ 6. REVERSING
    reverse(vec.begin(), vec.end());
    cout << "Reversed Vector: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // ✅ 7. FINDING SUM OF ARRAY
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "Sum of Vector: " << sum << endl;

    // ✅ 8. SEARCHING
    int target = 5;
    if (find(vec.begin(), vec.end(), target) != vec.end()) {
        cout << "Element " << target << " found in vector." << endl;
    } else {
        cout << "Element " << target << " not found." << endl;
    }

    // ✅ 9. TWO POINTER TECHNIQUE (Example: Finding Two Sum)
    vector<int> twoSumVec = {2, 7, 11, 15};
    int sumTarget = 9;
    int left = 0, right = twoSumVec.size() - 1;
    while (left < right) {
        if (twoSumVec[left] + twoSumVec[right] == sumTarget) {
            cout << "Two Sum found at indices: " << left << " and " << right << endl;
            break;
        }
        (twoSumVec[left] + twoSumVec[right] < sumTarget) ? left++ : right--;
    }

    // ✅ 10. SLIDING WINDOW TECHNIQUE (Example: Maximum Sum Subarray)
    int windowSize = 3, maxSum = 0, currSum = 0;
    for (int i = 0; i < windowSize; i++) currSum += vec[i];
    maxSum = currSum;

    for (int i = windowSize; i < vec.size(); i++) {
        currSum += vec[i] - vec[i - windowSize];
        maxSum = max(maxSum, currSum);
    }
    cout << "Maximum sum of subarray of size " << windowSize << " is: " << maxSum << endl;

    // ✅ 11. KADANE’S ALGORITHM (Maximum Subarray Sum)
    int bestSum = vec[0], currentSum = vec[0];
    for (size_t i = 1; i < vec.size(); i++) {
        currentSum = max(vec[i], currentSum + vec[i]);
        bestSum = max(bestSum, currentSum);
    }
    cout << "Kadane’s Max Subarray Sum: " << bestSum << endl;

    // ✅ 12. HASHMAP (UNORDERED_MAP) FOR FAST LOOKUP (Example: Two Sum)
    unordered_map<int, int> hashMap;
    vector<int> arrTwoSum = {2, 7, 11, 15};
    int targetSum = 9;

    for (int i = 0; i < arrTwoSum.size(); i++) {
        int complement = targetSum - arrTwoSum[i];
        if (hashMap.find(complement) != hashMap.end()) {
            cout << "Two Sum found at indices: " << hashMap[complement] << " and " << i << endl;
            break;
        }
        hashMap[arrTwoSum[i]] = i;
    }

    return 0;
}







// 📌 Summary of Concepts Covered:
// ✅ Array Basics - Declaration, Initialization, Size
// ✅ Traversing - for loop, range-based for loop
// ✅ Updating Elements - Changing values in arrays/vectors
// ✅ Sorting & Reversing - sort(), reverse()
// ✅ Finding Max & Min - max_element(), min_element()
// ✅ Finding Sum of Elements - accumulate()
// ✅ Searching Elements - find()
// ✅ Two Pointer Technique - Optimized searching (e.g., Two Sum)
// ✅ Sliding Window Technique - Efficient subarray problems
// ✅ Kadane’s Algorithm - Finding max sum subarray
// ✅ HashMap (Unordered Map) - Efficient searching in O(1)










