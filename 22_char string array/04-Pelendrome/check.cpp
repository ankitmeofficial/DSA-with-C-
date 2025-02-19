#include <iostream>
#include <string>
using namespace std ;

string reversecheck(string s){
    int start =0;
    int end = s.length()-1;

    while (start <= end ){
        if (s[start]!=s[end]){
        //    cout<< "not pelindrome ";
        return 0;
        }
        start++;
        end--;

    }
    return s;
}


int main (){

string word = "mada";

cout << "see pelindrome or not " <<reversecheck(word);


    return 0;
}
