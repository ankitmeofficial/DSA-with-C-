#include <iostream>
#include <stack>
using namespace std;
string checkdu(string txt ){
    int iscount = 0;
    while(iscount!=txt.length()){
        int i=0;
        if(txt[i]==txt[i+1]){
            txt.erase(i ,2);
            i=i+1;
        }
        else{
            ++i;
        }
        iscount=iscount+1;
    }
    return txt;
}
int main()
{


    string txt = "azxxzy";

    cout<< txt << "\n";
    string isresult= checkdu(txt);
    cout << isresult << endl;
    return 0;
}