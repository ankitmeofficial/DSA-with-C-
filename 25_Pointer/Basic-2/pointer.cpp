#include <iostream>
#include<string>
#include <memory>  // For smart pointers
#include <cstring> // For string operations

using namespace std;

int main() {
    // 1. Basic Pointer Declaration and Dereferencing
    int x = 10;
    int* ptr = &x; // Pointer stores address of x
    cout << "Value of x: " << *ptr << endl; // Dereferencing pointer (Output: 10)

    // 2. Pointer Arithmetic
    int arr[] = {10, 20, 30};
    int* p = arr; // Points to first element of array
    cout << "Second element using pointer arithmetic: " << *(p + 1) << endl; // Output: 20

    // 3. Dynamic Memory Allocation
    int* dynamicPtr = new int(5);  // Allocates memory for an integer
    cout << "Dynamically allocated value: " << *dynamicPtr << endl; // Output: 5
    delete dynamicPtr; // Free memory

    // 4. Dynamic Array Allocation
    int* dynamicArr = new int[3]; // Allocates array of size 3
    dynamicArr[0] = 100;
    dynamicArr[1] = 200;
    dynamicArr[2] = 300;
    cout << "First element of dynamically allocated array: " << dynamicArr[0] << endl; // Output: 100
    delete[] dynamicArr; // Free memory

    // 5. Null Pointer
    int* nullPtr = nullptr;
    if (nullPtr == nullptr) {
        cout << "Null pointer detected." << endl;
    }

    // 6. Dangling Pointer
    int* danglePtr = new int(42);
    delete danglePtr; // Memory freed
    danglePtr = nullptr; // Avoid dangling pointer issue

    // 7. Pointer to Pointer
    int** doublePtr = &ptr; // Stores address of pointer ptr
    cout << "Value of x using double pointer: " << **doublePtr << endl; // Output: 10

    // 8. Function Pointer
    auto func = []() { cout << "Function pointer called!" << endl; };
    void (*funcPtr)() = func;
    funcPtr(); // Calls the function

    // 9. Pointers and Strings
    char str[] = "Hello";
    char* strPtr = str;
    cout << "String using pointer: " << strPtr << endl; // Output: Hello

    // 10. Dynamic String Allocation
    char* dynamicStr = new char[10];
    strcpy(dynamicStr, "World");
    cout << "Dynamically allocated string: " << dynamicStr << endl;
    delete[] dynamicStr;

    // 11. Const Pointer (Pointer cannot change but value can)
    int y = 20;
    int* const constPtr = &x; // Constant pointer
    *constPtr = 15; // Allowed
    // constPtr = &y; // Not allowed

    // 12. Pointer to Constant (Pointer can change, but value cannot)
    const int* ptrToConst = &x;
    // *ptrToConst = 25; // Not allowed
    ptrToConst = &y; // Allowed

    // 13. Constant Pointer to Constant Data
    const int* const constPtrToConst = &x;
    // *constPtrToConst = 30; // Not allowed
    // constPtrToConst = &y; // Not allowed

    // 14. Smart Pointers (Automatic Memory Management)
    unique_ptr<int> uniquePtr = make_unique<int>(50);
    cout << "Unique pointer value: " << *uniquePtr << endl;

    shared_ptr<int> sharedPtr = make_shared<int>(100);
    cout << "Shared pointer value: " << *sharedPtr << endl;

    return 0;
}




// Basic Pointers: Declares a pointer and accesses the variable’s value using dereferencing.
// Pointer Arithmetic: Demonstrates moving through an array using pointers.
// Dynamic Memory Allocation: Uses new and delete to manage memory.
// Null and Dangling Pointers: Shows how to avoid them.
// Pointer to Pointer (**): Stores a pointer’s address in another pointer.
// Function Pointers: Stores and calls functions using pointers.
// String Pointers: Demonstrates pointers with character arrays (char*).
// const with Pointers: Covers various const pointer scenarios.
// Smart Pointers (std::unique_ptr, std::shared_ptr): Manages memory safely.
