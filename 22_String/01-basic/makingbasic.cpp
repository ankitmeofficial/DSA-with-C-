#include <iostream>
#include <vector>
#include <sstream>  // For stringstream
#include <string>   // For std::string

using namespace std;

int main() {
    // 1️⃣ Using Character Array (Fixed-size, ends with '\0')
    char charArray[20] = "Hello";
    cout << "1. Character Array: " << charArray << endl;

    // 2️⃣ Using Character Pointer (String literal, stored in read-only memory)
    char* charPointer = "World";  // Cannot modify this string
    cout << "2. Character Pointer: " << charPointer << endl;

    // 3️⃣ Using std::string (Recommended for modern C++)
    string cppString = "Hello World!";
    cout << "3. std::string: " << cppString << endl;

    // 4️⃣ Using std::vector<char> (Mutable & Dynamic character array)
    vector<char> charVector = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "4. Vector<char>: ";
    for (char c : charVector) cout << c;
    cout << endl;

    // 5️⃣ Using stringstream (For advanced string manipulation)
    stringstream ss;
    ss << "I live in Bangalore";
    string processedString = ss.str();  // Extract the final string
    cout << "5. Using stringstream: " << processedString << endl;

    return 0;
}
