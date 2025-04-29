#include <iostream>
using namespace std;

void print_myarr(int arr[], int n , int i=0)
{
 
    if (i>=n)
    {
        return;
    }
    cout << arr[i] << endl;
    return print_myarr(arr , n , i+1);
}
int main()
{

    int myarr[5] = {1, 2, 35, 54, 34};
    int number = 5;
    print_myarr(myarr, number );

    return 0;
}