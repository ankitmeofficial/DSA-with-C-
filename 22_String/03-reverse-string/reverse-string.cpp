#include <iostream>
#include <string>
using namespace std;

string reverse_string(string s)
{
    int i = 0;
    string result;
    int N = s.size();

    while (i < N)
    {
        while ( i < N && s[i] == ' ')
            i++;
        int j = i + 1;
        while (j < N && s[j] != ' ')
            j++;
        string sub = s.substr(i,j-i);
        if (result.length() == 0)
            result=sub;
        else
        {
            result = sub + ' ' + result;
        }
        i=j;
    }
    return result ;
}

int main()
{

    string intro = "Hello ji kya hal chal ";
    cout << intro << endl;
    string revresult =reverse_string(intro);
    cout<< revresult;

    return 0;
}