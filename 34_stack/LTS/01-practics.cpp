#include <iostream>
#include <stack>
using namespace std;

string checkdu(string txt) {
    bool changed;
    do {
        changed = false;
        for (int i = 0; i < (int)txt.length() - 1; ) {
            if (txt[i] == txt[i+1]) {
                txt.erase(i, 2);
                changed = true;
                // Don't increment i here because we need to check new adjacent pairs
                // after deletion
            } else {
                i++;
            }
        }
    } while (changed);  // Repeat until no more duplicates are found
    
    return txt;
}

int main() {
    string txt = "azxxzy";
    cout << "Original: " << txt << "\n";
    string isresult = checkdu(txt);
    cout << "After removal: " << isresult << endl;
    return 0;
}










