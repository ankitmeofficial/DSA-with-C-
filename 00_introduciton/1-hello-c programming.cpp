

// ==================== 1. BASIC SYNTAX & DATA TYPES ====================

#include <iostream>  // Standard input/output library
using namespace std; // Allows use of names from std without std:: prefix

int main() {         // Entry point of every C++ program
    
    // ----- Primitive Data Types -----
    int integerVar = 42;           // 4 bytes, range: -2^31 to 2^31-1
    float floatVar = 3.14f;        // 4 bytes, 7 decimal digits precision
    double doubleVar = 3.141592;   // 8 bytes, 15 decimal digits precision
    char charVar = 'A';            // 1 byte, single character/ASCII value
    bool boolVar = true;           // 1 byte, true(1) or false(0)
    
    // ----- Type Modifiers -----
    unsigned int positiveOnly = 400; // Only positive numbers (0 to 2^32-1)
    long int bigInt = 1234567890;   // At least 4 bytes (often 8 on 64-bit)
    long long hugeInt = 1e18;       // At least 8 bytes (for very large numbers)
    short smallInt = 32767;         // 2 bytes (-32768 to 32767)
    
    // ----- Sizeof Operator -----
    cout << "Size of int: " << sizeof(int) << " bytes\n"; // Check size of any type
    
    return 0; // Indicates successful program termination
}

// ==================== 2. OPERATORS ====================

/*
Arithmetic Operators: +, -, *, /, % (modulus)
Relational Operators: ==, !=, >, <, >=, <=
Logical Operators: && (AND), || (OR), ! (NOT)
Bitwise Operators: & (AND), | (OR), ^ (XOR), ~ (NOT), << (left shift), >> (right shift)
Assignment Operators: =, +=, -=, *=, /=, %=, etc.
*/

// Example:
int a = 10, b = 3;
int sum = a + b;      // 13
int mod = a % b;      // 1 (remainder)
bool isEqual = (a == b); // false
int bitwiseAnd = a & b;  // 2 (1010 & 0011 = 0010)

// ==================== 3. CONTROL STRUCTURES ====================

// ----- If-Else -----
int x = 10;
if (x > 5) {
    cout << "x is greater than 5";
} else if (x == 5) {
    cout << "x is 5";
} else {
    cout << "x is less than 5";
}

// ----- Switch Case -----
char grade = 'B';
switch(grade) {
    case 'A': cout << "Excellent"; break;
    case 'B': cout << "Good"; break; // This will execute
    case 'C': cout << "Average"; break;
    default: cout << "Invalid grade";
}

// ----- Loops -----

// For loop
for(int i = 0; i < 5; i++) {
    cout << i << " "; // 0 1 2 3 4
}

// While loop
int j = 5;
while(j > 0) {
    cout << j-- << " "; // 5 4 3 2 1
}

// Do-While loop (executes at least once)
int k = 0;
do {
    cout << k++ << " "; // 0 1 2 3 4
} while(k < 5);

// ==================== 4. FUNCTIONS ====================

// Function declaration
int addNumbers(int a, int b) {
    return a + b;
}

// Function call
int result = addNumbers(3, 4); // 7

// Pass by reference (modifies original variable)
void increment(int &num) {
    num++;
}

int val = 5;
increment(val); // val becomes 6

// ==================== 5. ARRAYS ====================

// Static array
int arr[5] = {1, 2, 3, 4, 5}; // Fixed size at compile time

// Accessing elements
cout << arr[0]; // First element (1)
arr[2] = 10;    // Modify third element

// Size of array
int size = sizeof(arr)/sizeof(arr[0]); // 5

// Multidimensional array
int matrix[2][3] = {{1,2,3}, {4,5,6}};

// ==================== 6. STRINGS ====================

#include <string> // Required for string class

// String initialization
string s1 = "Hello";
string s2("World");

// String operations
s1.length();       // 5
s1 + " " + s2;     // Concatenation: "Hello World"
s1.substr(1, 3);   // "ell" (from index 1, length 3)
s1.find("ell");    // Returns index 1

// Character access
char c = s1[0];    // 'H'

// ==================== 7. POINTERS ====================

int num = 10;
int *ptr = &num;   // Pointer holds address of num

cout << *ptr;      // Dereferencing: 10
*ptr = 20;         // Changes num to 20

// Dynamic memory allocation
int *dynamicArr = new int[5]; // Allocate array on heap
delete[] dynamicArr;          // Must deallocate

// ==================== 8. OBJECT-ORIENTED PROGRAMMING ====================

class Rectangle {
private:
    int width, height;
    
public:
    // Constructor
    Rectangle(int w, int h) : width(w), height(h) {}
    
    // Method
    int area() {
        return width * height;
    }
    
    // Setter
    void setWidth(int w) {
        width = w;
    }
};

// Create object
Rectangle rect(3, 4);
cout << rect.area(); // 12

// ==================== 9. STL (STANDARD TEMPLATE LIBRARY) ====================

#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>

// ----- Vector (Dynamic Array) -----
vector<int> vec = {1, 2, 3};
vec.push_back(4);       // {1,2,3,4}
vec.pop_back();         // {1,2,3}
vec.size();             // 3
sort(vec.begin(), vec.end()); // Sort the vector

// ----- Pair -----
pair<int, char> p = {1, 'a'};
cout << p.first << " " << p.second; // 1 a

// ----- Queue (FIFO) -----
queue<int> q;
q.push(1); q.push(2);   // {1, 2}
q.front();              // 1
q.pop();                // removes 1

// ----- Stack (LIFO) -----
stack<int> st;
st.push(1); st.push(2); // {1, 2} (top is 2)
st.top();               // 2
st.pop();               // removes 2

// ----- Set (Unique elements, sorted) -----
set<int> s;
s.insert(3); s.insert(1); s.insert(2); // {1, 2, 3}
s.count(2);            // 1 (exists)
s.erase(2);             // {1, 3}

// ----- Map (Key-value pairs, sorted by key) -----
map<string, int> m;
m["apple"] = 50;        // Insert
m["banana"] = 20;
cout << m["apple"];     // 50
m.count("apple");       // 1 (exists)

// ==================== 10. ALGORITHMS ====================

vector<int> nums = {3, 1, 4, 1, 5, 9};

// Sorting
sort(nums.begin(), nums.end()); // {1, 1, 3, 4, 5, 9}

// Binary search (requires sorted range)
bool found = binary_search(nums.begin(), nums.end(), 4); // true

// Reverse
reverse(nums.begin(), nums.end()); // {9, 5, 4, 3, 1, 1}

// Min/max
int min_val = *min_element(nums.begin(), nums.end()); // 1
int max_val = *max_element(nums.begin(), nums.end()); // 9

// ==================== 11. TIME COMPLEXITY BASICS ====================

/*
O(1) - Constant time (e.g., array access)
O(log n) - Logarithmic (binary search)
O(n) - Linear (simple search)
O(n log n) - Linearithmic (efficient sorting)
O(n^2) - Quadratic (nested loops)
O(2^n) - Exponential (recursive Fibonacci)
O(n!) - Factorial (permutations)
*/

// ==================== 12. COMMON DSA PATTERNS ====================

// Two pointers technique
vector<int> twoSum(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    sort(nums.begin(), nums.end());
    
    while(left < right) {
        int sum = nums[left] + nums[right];
        if(sum == target) return {left, right};
        else if(sum < target) left++;
        else right--;
    }
    return {-1, -1};
}

// Sliding window
int maxSubarray(vector<int>& nums, int k) {
    int maxSum = 0, windowSum = 0;
    for(int i = 0; i < k; i++) windowSum += nums[i];
    
    for(int i = k; i < nums.size(); i++) {
        windowSum += nums[i] - nums[i-k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

/*
 * ======================================================
 * END OF C++ DSA REFRESHER
 * ======================================================
 * 
 * Key points to remember:
 * 1. Master STL containers (vector, map, set, etc.)
 * 2. Understand time complexity of operations
 * 3. Practice common patterns (two pointers, sliding window, etc.)
 * 4. Know when to use pass-by-reference vs pass-by-value
 * 5. Be comfortable with recursion and backtracking
 */
```

# Comprehensive C++ Notes for DSA Preparation (Continued)

```cpp
// ==================== 13. RECURSION ====================

/*
Recursion is when a function calls itself directly/indirectly
Essential for many DSA problems (trees, graphs, backtracking)
*/

// Factorial using recursion
int factorial(int n) {
    // Base case
    if (n == 0 || n == 1) return 1;
    
    // Recursive case
    return n * factorial(n - 1);
}

// Fibonacci sequence
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

/*
Recursion Tips:
1. Always define base case(s) first
2. Ensure recursive calls progress toward base case
3. Watch for stack overflow with deep recursion
*/

// ==================== 14. BACKTRACKING ====================

/*
Backtracking is algorithmic technique for finding all solutions
by exploring all potential candidates incrementally
*/

// Example: Generate all permutations
void backtrack(vector<int>& nums, vector<vector<int>>& result, int start) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    
    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);
        backtrack(nums, result, start + 1);
        swap(nums[start], nums[i]); // undo the swap (backtrack)
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    backtrack(nums, result, 0);
    return result;
}

// ==================== 15. BINARY SEARCH ====================

// Iterative binary search (array must be sorted)
int binarySearch(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2; // prevents overflow
        
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // not found
}

/*
Binary Search Variations:
1. First/last occurrence of element
2. Search in rotated sorted array
3. Find peak element
4. Median of two sorted arrays
*/

// ==================== 16. SORTING ALGORITHMS ====================

// Selection Sort (O(n^2))
void selectionSort(vector<int>& arr) {
    for (int i = 0; i < arr.size()-1; i++) {
        int minIdx = i;
        for (int j = i+1; j < arr.size(); j++) {
            if (arr[j] < arr[minIdx]) minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

// Merge Sort (O(n log n))
void merge(vector<int>& arr, int l, int m, int r) {
    vector<int> temp(r - l + 1);
    int i = l, j = m+1, k = 0;
    
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    
    while (i <= m) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];
    
    for (int p = 0; p < temp.size(); p++) {
        arr[l + p] = temp[p];
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

// ==================== 17. LINKED LISTS ====================

// Basic singly linked list node
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Traverse linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
}

// Reverse linked list (iterative)
ListNode* reverseList(ListNode* head) {
    ListNode *prev = nullptr, *curr = head, *next = nullptr;
    
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}

// ==================== 18. TREES ====================

// Binary Tree Node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Tree Traversals

// 1. Pre-order (Root -> Left -> Right)
void preOrder(TreeNode* root) {
    if (root == nullptr) return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// 2. In-order (Left -> Root -> Right)
void inOrder(TreeNode* root) {
    if (root == nullptr) return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

// 3. Post-order (Left -> Right -> Root)
void postOrder(TreeNode* root) {
    if (root == nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}

// ==================== 19. GRAPHS ====================

/*
Graph Representations:
1. Adjacency Matrix - 2D array where matrix[i][j] = 1 if edge exists
2. Adjacency List - Array of lists (more space efficient for sparse graphs)
*/

// DFS on graph (adjacency list)
void dfs(int node, vector<bool>& visited, vector<vector<int>>& adj) {
    visited[node] = true;
    cout << node << " ";
    
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, visited, adj);
        }
    }
}

// BFS on graph
void bfs(int start, vector<vector<int>>& adj) {
    vector<bool> visited(adj.size(), false);
    queue<int> q;
    
    q.push(start);
    visited[start] = true;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

// ==================== 20. DYNAMIC PROGRAMMING ====================

/*
DP is method for solving complex problems by breaking them down
into simpler subproblems and storing their solutions
*/

// Fibonacci with memoization (top-down DP)
int fibMemo(int n, vector<int>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    
    memo[n] = fibMemo(n-1, memo) + fibMemo(n-2, memo);
    return memo[n];
}

// Fibonacci with tabulation (bottom-up DP)
int fibTab(int n) {
    if (n <= 1) return n;
    
    vector<int> dp(n+1);
    dp[0] = 0; dp[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    return dp[n];
}

// ==================== 21. COMMON DSA PROBLEM PATTERNS ====================

/*
1. Two Pointers - Used in array/string problems with pairs
2. Sliding Window - For subarray/substring problems
3. Fast & Slow Pointers - Linked list cycles
4. Merge Intervals - Overlapping intervals
5. Cyclic Sort - Array with numbers in given range
6. Topological Sort - For tasks with dependencies
*/

// ==================== 22. C++ OPTIMIZATION TIPS FOR DSA ====================

/*
1. Use '\n' instead of endl (faster output)
2. Use unordered_map instead of map when order doesn't matter
3. Preallocate vector size when possible (vector<int> v(n))
4. Pass by reference to avoid copying large objects
5. Use emplace_back() instead of push_back() for containers
6. Use bitset for bit manipulation problems
7. Use prefix sums for range sum queries
*/

// ==================== 23. PRACTICE PROBLEM CATEGORIES ====================

/*
Arrays: Two Sum, Maximum Subarray, Product Except Self
Strings: Longest Substring Without Repeating Chars, Palindromes
Linked Lists: Reverse List, Detect Cycle, Merge Two Lists
Trees: Level Order Traversal, Validate BST, Lowest Common Ancestor
Graphs: Number of Islands, Course Schedule, Clone Graph
DP: Climbing Stairs, House Robber, Longest Increasing Subsequence
*/

/*
 * ======================================================
 * FINAL NOTES
 * ======================================================
 * 
 * 1. Master these concepts before intensive DSA practice
 * 2. Focus on problem patterns rather than memorizing solutions
 * 3. Time/space complexity analysis is crucial
 * 4. Regular practice is key to retention
 * 5. Start with easier problems and gradually increase difficulty
 */
```

