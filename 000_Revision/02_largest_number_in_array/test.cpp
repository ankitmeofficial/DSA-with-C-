#include <iostream>
using namespace std;

int largestis(int myarr[], int size)
{
    int lgr_index = 0;

    for (int i = 0; i < size; i++)
    {
        if (myarr[i] > myarr[lgr_index])
        {

            lgr_index = i;
        }
    }
    return myarr[lgr_index];
}

int main()
{
    cout << "hn ji ";

    int arr[5] = {2, 7, 3, 6, 5};
    int size = 5;

    cout << "largest element is " << largestis(arr, size) << endl;

    return 0;
}