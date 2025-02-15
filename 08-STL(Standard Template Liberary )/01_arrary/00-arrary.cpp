#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};  // Declaring an array of size 5

    // Accessing elements
    cout << "First Element: " << arr[0] << endl; // Index-based access
    cout << "Second Element: " << arr.at(1) << endl; // at() method access (safe)

    // Iterating over the array
    cout << "Array Elements: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Size of the array
    cout << "Size of array: " << arr.size() << endl;

    // Accessing the first and last element
    cout << "First Element: " << arr.front() << endl;
    cout << "Last Element: " << arr.back() << endl;

    return 0;
}





