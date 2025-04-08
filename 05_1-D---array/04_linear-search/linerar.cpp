#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cout << "enter a element for search " << endl;
    cin >> key;
}
