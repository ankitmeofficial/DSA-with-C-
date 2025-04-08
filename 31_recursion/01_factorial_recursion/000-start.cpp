#include <iostream>
using namespace std;

int factorial(int n)
{

    if (n == 0 || n == 1)

        return 1;
        return (n*factorial(n - 1));

}
    int main()
    {

        int n;
        cout << "Enter a number " << endl;
        cin >> n;
        cout << " factorial for number " << n << " is " << endl;

        int calfactorial = factorial(n);

        cout << calfactorial << endl;

        return 0;
    }


// esme if condition ke baad { } nhi hai , or do return ho rhe hai . 






