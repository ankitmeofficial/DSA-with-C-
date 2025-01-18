#include <iostream>
using namespace std;

int main()
{
    int row;
    int column;
    row = 4;
    // column = 1;
    int i=0;


    while (i <= row)
    {
        int j=1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}