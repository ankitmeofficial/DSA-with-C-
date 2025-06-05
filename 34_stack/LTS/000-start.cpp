#include <iostream>
#include <stack>
using namespace std;
// function for display the elements
// void isDisplay(){
//     for(int i : s){
//         cout<< i << endl ;

//     }
// }

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top() << " "<< endl;
        s.pop();
    }
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.size() << endl;
    cout << "The length of the txt string is: " << txt.length() << endl;
    cout << "position 1 is "<< txt[0];
    cout << "position 2 is "<< txt.at(1);
    cout << "position at second last is " << txt.at(txt.length()-2);

    return 0;
}