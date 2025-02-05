#include <iostream>  // For input/output operations

int main() {
    int n;  // Variable to store the size of the array

    // Ask the user for the size of the array
    std::cout << "Enter the size of the array (must be <= 100): ";
    std::cin >> n;

    // Ensure the size doesn't exceed a predefined limit for static arrays
    if (n > 100) {
        std::cout << "Size too large for static array. Exiting program." << std::endl;
        return 1;
    }

    // Declare a static array with a maximum size
    int myarray[100];

    // Take elements of the array as input from the user
    std::cout << "Enter " << n << " elements for the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> myarray[i];
    }

    // Print the size of the array
    std::cout << "Size of the array: " << n << std::endl;

    // Print the elements of the array
    std::cout << "Elements in the array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << myarray[i] << " ";
    }
    std::cout << std::endl;

    return 0;  // Indicate successful execution
}



