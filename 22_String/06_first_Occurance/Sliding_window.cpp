#include <iostream>
#include <string>
using namespace std;

int sliding_window(string haystack, string needed)
{
    int hay_len = haystack.length();
    int nee_len = needed.length();

    if (hay_len == 0)
        return -1;
    int i = 0;
    for (i; i <=hay_len - nee_len; i++)
    {
        if (haystack.substr(i, nee_len) == needed)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

string pond = "butsad";
string fish = "sad";

int result =sliding_window(pond , fish );

if (result==-1){
cout<< "not found ";
}
else {
    cout << "First occurance on index " <<  result << endl;
}
    return 0;
}