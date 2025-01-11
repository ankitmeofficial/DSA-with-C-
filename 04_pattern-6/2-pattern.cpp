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
            cout << j ;

            // to print reverse number 
            // cout << column-j+1 ; 
            j = j + 1;
        }
        cout << endl;
        i = i + 1;

    }
}



