#include <iostream>
#include <string>
#include <vector>
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
        // str.insert(5,"i am new word added ");
        // cout << "New sentence :  "<< str << endl;
        
        // replacing the word 
        // str.replace(5,3,"was ");
        // cout << "New sentence :  "<< str << endl;


    // useing vector for dynamic memory allocaiton and useing push and pop 
    // vector<string> token;
    // token.push_back("i");
    // token.push_back("am");
    // token.push_back("learnign");
    // token.push_back("c++");
    // cout<<"token value is "<<token << endl;


    // basic vector initialization 
    // in this initializaiton ther is vector and in side <> braces type of after num is the name of vector which will create a array type of data type .in this example it is not a good way to check the pon_back function , when we used pop_back function then it remove the element temporary .

    vector<int > num ;
    num.push_back(3);
    num.push_back(4);
    cout<<"before the pop"<<endl;
    cout<<num[0]<<endl;
    cout<<num[1]<<endl;
    cout<<"size of the num " <<num.size();
    // num.pop_back();
    // cout<<"after the pop"<<endl;
    // cout<<num[0]<<endl;
    // cout<<num[1]<<endl;


/*

// Correct way to check the pop_back element or not .
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Declaring a vector
    vector<int> num;  
    num.push_back(3);  
    cout << num[0] << endl; 
    num.push_back(4);  
    cout << "Before the pop" << endl;
    cout << num[0] << endl; 
    cout << num[1] << endl;  
    // Removing the last element (4)
    num.pop_back();  
    cout << "After the pop" << endl;
    cout << num[0] << endl;  
    // Output: 3
    // Only access if size is greater than 1
    if (num.size() > 1) {
        cout << num[1] << endl;
    } else {
        cout << "No second element left!" << endl;
     }
    return 0;
}

*/

    // vector 
    // vector<int > num(5,0);
    // for(int i : num){
    //     cout<<i << endl ;
    // }




    return 0;
}