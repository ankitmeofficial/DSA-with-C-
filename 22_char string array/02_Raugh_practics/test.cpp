#include <iostream>
#include <string> 

using namespace std;

int main() {
    char name[20];

    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is: " << name << endl;

    // Convert C-style string to std::string for length
    string nameString = name; 
    cout << "Name length: " << nameString.length() << endl;

    return 0;
}
