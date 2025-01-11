#include <iostream>
using namespace std;

int main()
{
    int row;
    int column;
    row = 4;
    column = 4;
    int i=1;


    while (i <= row)
    {
        int j=1;
        while (j <= column)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
        column=column-1;
    }
}