#include <iostream>  
#include<stack>
using namespace std;  

bool checkvalid(string astr){
    int left =0;
    stack<string> temp;
    for (int i=0; i<astr.length();i++){
        // string lsign='(';
        if (astr[i]=='(' ){
            temp.push(astr[i]);
            i++;
        }
        else if (astr.empty())
        {
            return 0;
        }
        else{
            temp.pop();
        }
        
    }
    return temp.empty();
}

int main()  
{  
    // find out 
    string mystr="()( ";
    cout << mystr << '\n';
    cout << checkvalid(mystr);

    return 0 ;
}  