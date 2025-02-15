#include <iostream>
#include <string>
#include <algorithm>  // For reverse, transform
#include <sstream>    // For splitting strings
#include <vector>     // For storing split results
using namespace std;

void printVector(vector<string> tokens) {
    cout << "[ ";
    for (string t : tokens)
        cout << t << " ";
    cout << "]" << endl;
}

int main() {
    string str = "Hello World!";

    // 1. Length and Size
    cout << "1. Length of string: " << str.length() << endl;

    // 2. Access Characters
    cout << "2. Access second character: " << str[1] << endl;

    // 3. Concatenation
    string str2 = " Welcome!";
    cout << "3. Concatenated string: " << str + str2 << endl;

    // 4. Substring
    cout << "4. Substring (first 5 characters): " << str.substr(0, 5) << endl;

    // 5. Insert
    string insertStr = "Beautiful ";
    str.insert(6, insertStr);
    cout << "5. After insertion: " << str << endl;

    // 6. Erase
    str.erase(6, insertStr.length());
    cout << "6. After erasing 'Beautiful ': " << str << endl;

    // 7. Replace
    str.replace(6, 5, "Universe");
    cout << "7. After replacement: " << str << endl;

    // 8. Find
    cout << "8. Find 'Universe': " << str.find("Universe") << endl;

    // 9. Compare
    cout << "9. Comparing 'Hello' and 'World': " << string("Hello").compare("World") << endl;

    // 10. Empty
    cout << "10. Is the string empty? " << (str.empty() ? "Yes" : "No") << endl;

    // 11. Clear
    string clearStr = "Clear me!";
    clearStr.clear();
    cout << "11. After clearing: '" << clearStr << "'" << endl;

    // 12. Push and Pop
    str.push_back('!');
    cout << "12. After push_back('!'): " << str << endl;
    str.pop_back();
    cout << "12. After pop_back(): " << str << endl;

    // 13. Reverse
    reverse(str.begin(), str.end());
    cout << "13. Reversed string: " << str << endl;
    reverse(str.begin(), str.end()); // Reverse back to original

    // 14. Transform (Uppercase/Lowercase)
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "14. Uppercase: " << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "14. Lowercase: " << str << endl;

    // 15. Split
    string splitStr = "Split this string into words";
    vector<string> tokens;
    stringstream ss(splitStr);
    string token;
    while (getline(ss, token, ' ')) {
        tokens.push_back(token);
    }
    cout << "15. Split result: ";
    printVector(tokens);

    // 16. Convert to C-String
    cout << "16. C-String: " << str.c_str() << endl;

    // 17. Resize
    str.resize(5);
    cout << "17. After resizing to 5 characters: " << str << endl;

    // 18. Find First/Last of Characters
    str = "OpenAI is amazing!";
    cout << "18. First vowel position: " << str.find_first_of("aeiou") << endl;
    cout << "18. Last vowel position: " << str.find_last_of("aeiou") << endl;

    return 0;
}
