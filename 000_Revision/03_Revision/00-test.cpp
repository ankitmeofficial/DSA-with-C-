#include <iostream>
using namespace std;

int faccalculate(int numb)
{
if (numb==0 || numb == 1 ) return 1; 
    int small = (numb - 1);
    int big = numb * faccalculate(small);
    return big;
}

int main()
{
    // first n numbers ka factorila calculate krna hai
    int num;
    cout << "Enter a nubmer " << endl;
    cin >> num;

    int result = faccalculate(num);
    cout << "fabintchi of " << num << " is " << result << endl; 

    return 0;
}