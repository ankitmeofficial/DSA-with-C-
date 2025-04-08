#include <iostream>
using namespace std;

int cal_fib(int num)
{

    if (num < 0)
    {
        return -1;
    }
    else if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }

    return cal_fib(num - 1) + cal_fib(num - 2);
}

int main()
{


    int fib_value ;
    cout<<"enter a number to calculate fibonacci "<< endl;
    cin >> fib_value;
    cout << "fibonacci of number " << fib_value << " is " << cal_fib(fib_value) << endl;
    return 0;
}