#include <iostream>
#include <string>
using namespace std;

int reversecheck(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            //    cout<< "not pelindrome ";
            return 0;
        }

        i++;
        j--;
    }
    return 1;
}

int main()
{

    string word = "A man, a plan, a canal: Panama";

    int checked = reversecheck(word);
    if (checked != 0)
    {
        cout << "this is a palandrome " << endl;
    }
    else
    {
        cout << "this is not a palandrome" << endl;
    }
    return 0;
}
