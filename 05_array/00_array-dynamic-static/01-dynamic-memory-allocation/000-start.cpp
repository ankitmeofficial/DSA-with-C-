#include <iostream>  // For input/output operations

int main() {
    int n;  // Variable to store the size of the array

    // Ask the user for the size of the dynamic array
    std::cout << "Enter the size of the dynamic array: ";
    std::cin >> n;

    // Dynamically allocate memory for the array
    int* myarray = new int[n];

    // Take elements of the array as input from the user
    std::cout << "Enter " << n << " elements for the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> myarray[i];
    }

    // Print the size of the dynamic array
    std::cout << "Size of the dynamic array: " << n << std::endl;

    // Print the elements of the array
    std::cout << "Elements in the array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << myarray[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate memory to prevent memory leaks
    delete[] myarray;

    return 0;  // Indicate successful execution
}




