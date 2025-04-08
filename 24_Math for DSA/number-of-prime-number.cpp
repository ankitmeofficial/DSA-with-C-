#include <iostream>
using namespace std;

int isaprime(int n)
{
    int count =0;

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
            count++;
        }
    }
    return count ;
}

int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;

    int countis=isaprime(n);

    if (isaprime(n))
    {
        cout << "number of prime number is  "<< countis << endl ;
    }
    else
    {
        cout << "not a prime nubmer ";
    }
    return 0;
}








