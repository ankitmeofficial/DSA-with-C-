#include <iostream>
using namespace std;

int checkarr(int myarray[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    return myarray[n - 1] >= myarray[n - 2] && checkarr(myarray[], n - 1);
}

int main()
{
    cout << "hn ji " << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "array is " << checkarr(arr, arr.size());

    return 0;
}









