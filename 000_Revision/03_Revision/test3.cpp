#include <iostream>
#include <algorithm>  // for sort()
#include <string>     // for string

using namespace std;

int main() 
{
    string myarr[5] = {"banana", "apple", "cherry", "mango", "blueberry"};

    // Printing original array
    cout << "Before sorting:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << myarr[i] << endl;
    }

    // Sorting the strings alphabetically
    sort(myarr, myarr + 5);

    // Printing sorted array
    cout << "\nAfter sorting:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << myarr[i] << endl;
    }

    return 0;
}
