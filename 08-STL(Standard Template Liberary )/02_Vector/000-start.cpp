#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declaring a vector of integers
    vector<int> vec;

    // Adding elements to the vector
    vec.push_back(10); // Add 10 at the end
    vec.push_back(20); // Add 20 at the end
    vec.push_back(30); // Add 30 at the end

    // Accessing elements
    cout << "First element: " << vec[0] << endl; // Using index
    cout << "Second element (using .at()): " << vec.at(1) << endl;

    // Iterating through the vector
    cout << "Elements in the vector: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // Size of the vector
    cout << "Size of vector: " << vec.size() << endl;

    // Removing the last element
    vec.pop_back(); // Removes the last element (30)

    cout << "After pop_back, elements: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // Checking if the vector is empty
    if (vec.empty()) {
        cout << "Vector is empty!" << endl;
    } else {
        cout << "Vector is not empty!" << endl;
    }

    // Clearing the vector
    vec.clear();
    cout << "After clear, size of vector: " << vec.size() << endl;

    return 0;
}




