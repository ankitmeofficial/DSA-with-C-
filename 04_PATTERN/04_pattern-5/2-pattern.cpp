#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i = 1; // Row counter
    while (i <= n) {
        int j = 1; // Space counter
        while (j <= n - i) {
            cout << " "; // Print spaces
            j++;
        }

        int k = 1; // Star counter
        while (k <= (2 * i - 1)) {
            cout << "*"; // Print stars
            k++;
        }

        cout << endl; // Move to the next line
        i++;
    }

    return 0;
}
