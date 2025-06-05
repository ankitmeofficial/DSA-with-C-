// 📌 Summary of Concepts Covered:
// ✅ 2D Array Basics - Declaration, Initialization, Size
// ✅ Traversing - Row-wise, Column-wise, Diagonal-wise
// ✅ Updating Elements - Modifying values
// ✅ Searching Elements - Finding a specific value
// ✅ Sorting Rows - sort() on each row
// ✅ Transpose of a Matrix - Flipping rows and columns
// ✅ Row & Column Sum - Computing sum of each row and column
// ✅ Matrix Multiplication - Multiplying two matrices
// ✅ Rotating a Matrix (90°) - In-place rotation
// ✅ Spiral Order Traversal - Extracting elements in a spiral order
// ✅ Flood Fill Algorithm (DFS/BFS in a Matrix) - (Add this if needed later)








#include <iostream>
#include <vector>
#include <algorithm>  // For sorting
#include <queue>      // For BFS in Flood Fill

using namespace std;

int main() {
    // ✅ 1. DECLARATION & INITIALIZATION
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Fixed-size 2D array
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Dynamic 2D vector

    int rows = 3, cols = 3;
    
    // ✅ 2. TRAVERSING A 2D ARRAY (ROW-WISE)
    cout << "Row-wise Traversal:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // ✅ 3. COLUMN-WISE TRAVERSAL
    cout << "Column-wise Traversal:\n";
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // ✅ 4. DIAGONAL TRAVERSAL
    cout << "Main Diagonal: ";
    for (int i = 0; i < min(rows, cols); i++) cout << arr[i][i] << " ";
    cout << endl;

    cout << "Anti-Diagonal: ";
    for (int i = 0; i < min(rows, cols); i++) cout << arr[i][cols - 1 - i] << " ";
    cout << endl;

    // ✅ 5. UPDATING ELEMENTS
    mat[1][1] = 99;
    cout << "Updated Matrix:\n";
    for (auto row : mat) {
        for (auto num : row) cout << num << " ";
        cout << endl;
    }

    // ✅ 6. SEARCHING IN A 2D ARRAY
    int target = 6;
    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                cout << "Element " << target << " found at (" << i << "," << j << ")\n";
                found = true;
            }
        }
    }
    if (!found) cout << "Element not found.\n";

    // ✅ 7. SORTING EACH ROW
    for (int i = 0; i < rows; i++) sort(arr[i], arr[i] + cols);
    cout << "Sorted Rows:\n";
    for (auto row : arr) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }

    // ✅ 8. TRANSPOSE OF A MATRIX
    int transpose[3][3];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
    cout << "Transpose:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    // ✅ 9. ROW & COLUMN SUM
    cout << "Row Sums: ";
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) sum += arr[i][j];
        cout << sum << " ";
    }
    cout << endl;

    cout << "Column Sums: ";
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) sum += arr[i][j];
        cout << sum << " ";
    }
    cout << endl;

    // ✅ 10. MATRIX MULTIPLICATION
    vector<vector<int>> matA = {{1, 2}, {3, 4}};
    vector<vector<int>> matB = {{5, 6}, {7, 8}};
    vector<vector<int>> result(2, vector<int>(2, 0));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    cout << "Matrix Multiplication:\n";
    for (auto row : result) {
        for (auto num : row) cout << num << " ";
        cout << endl;
    }

    // ✅ 11. ROTATE MATRIX 90° (IN-PLACE)
    for (int i = 0; i < rows; i++) {
        for (int j = i; j < cols; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for (int i = 0; i < rows; i++) reverse(mat[i].begin(), mat[i].end());
    cout << "Rotated 90° Matrix:\n";
    for (auto row : mat) {
        for (auto num : row) cout << num << " ";
        cout << endl;
    }

    // ✅ 12. SPIRAL ORDER TRAVERSAL
    cout << "Spiral Order: ";
    int left = 0, right = cols - 1, top = 0, bottom = rows - 1;
    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; i++) cout << arr[top][i] << " ";
        top++;
        for (int i = top; i <= bottom; i++) cout << arr[i][right] << " ";
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) cout << arr[bottom][i] << " ";
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) cout << arr[i][left] << " ";
            left++;
        }
    }
    cout << endl;

    return 0;
}



