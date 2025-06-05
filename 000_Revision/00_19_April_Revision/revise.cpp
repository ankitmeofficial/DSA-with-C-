#include <iostream>
#include <vector>
using namespace std;

int arrangeit(vector<int> myarr)
{
    int arrsize = sizeof(myarr) / sizeof(myarr[0]);
    int j = 0;
    for (int i = 0; i < arrsize; i++)
    {
        swap(myarr[j], myarr[i]);
        j++;
    }
    return myarr;
}

int main()
{

    vector<int> first = {0,1,0,3,12};

    cout<<arrangeit(first) ;


    // int sec[5] = {1, 2, 3, 4, 5};
    // cout << first[0] << endl;
    // cout << sec[1] << endl;

    return 0;
}