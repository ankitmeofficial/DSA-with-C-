#include <iostream>
using namespace std;

int main()
{
   int num[3]={20,30,40};
//    cout<< num[0];
   int size = sizeof(num)/sizeof(num[0]);
   cout << "number of element in array is " << size << endl;

for (int i=0; i<size; i++)
{
    cout<<num[i]<<endl ;
}

}

