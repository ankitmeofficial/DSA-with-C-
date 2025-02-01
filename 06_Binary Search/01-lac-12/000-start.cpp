#include <iostream>
using namespace std;

// creating a function which will take as argument array , no. of element , and key ( key is element which you want to find out )
int findelement(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{

    // given array me hme element find out krne hai jo user chahe

    int myarray[4] = {0, 10, 20, 30};

    int yourelementindex = findelement(myarray, 4, 20);
if (yourelementindex!=-1){

    cout << "your element is on index no " << yourelementindex << endl;
}
else{
    cout<<"element is not found ";
}
}
