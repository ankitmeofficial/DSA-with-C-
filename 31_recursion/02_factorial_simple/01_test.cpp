#include <iostream>
using namespace std;

int factorial(int n)
{
    int fac = 1;
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            // int fac=1;
            fac = fac * i;
        }
    }

    return fac;
}

int main()
{

    int n = 4;

    cout << "factorial is " << factorial(n) << endl;

    return 0;
}
