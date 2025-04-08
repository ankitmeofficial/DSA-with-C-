#include <iostream>
using namespace std;

int isaprime(int n)
{

    if (n < 2)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{

    int n;
    cout << "Enter a number ";
    cin >> n;

    if (isaprime(n))
    {
        cout << "this is a prime number ";
    }
    else
    {
        cout << "not a prime nubmer ";
    }

    return 0;
}