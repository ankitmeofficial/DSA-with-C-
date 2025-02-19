#include <iostream>
#include <string>
using namespace std;
 

int main (){

    string str ="This is first String ";
    
         // concatination of string 
    // string str2="This is second string ";
    // cout << " after concatinaiton of string is : "<< str+str2 << endl;

        // finding the substrign 
    // cout<<"substring is :" << str.substr(0,4) << endl;
    // cout <<" substring is :"<< str.substr(5,2)<<endl;

        // inserting new word or sentence 
        str.insert(5,"i am new word added ");
        cout << "New sentence :  "<< str << endl;




    return 0;
}