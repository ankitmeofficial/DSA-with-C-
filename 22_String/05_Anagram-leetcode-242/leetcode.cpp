#include <iostream>
#include <string>
#include <algorithm> // For sort() function
using namespace std;

bool isAnagram(string s, string t) {
    // If lengths are not equal, they can't be anagrams
    if (s.length() != t.length()) {
        return false;
    }

    // Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Compare the sorted strings
    return s == t;
}

int main() {
    string first = "anagram";
    string sec = "nagaram";

    bool result = isAnagram(first, sec);

    if (result) {
        cout << "This is an anagram." << endl;
    } else {
        cout << "This is not an anagram." << endl;
    }

    return 0;
}
