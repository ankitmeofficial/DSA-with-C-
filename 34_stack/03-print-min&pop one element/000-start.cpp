#include <iostream>
#include <vector>
#include<stack>
using namespace std;

void printmin(vector<int> s){
    stack<int > temp;
    for(int i=0 ; i< s.size(); i++){
        if (temp.top()<s[i]){
            temp.push(temp.top());

        }
        else{
            temp.push(s[i]);

        }
    }
   while(!temp.empty()){
        cout << temp.top();
        temp.pop();
   }

    

}

int main()
{
    // array given hrega , stack me push all elements , find min element in present 
    // element and print and pop one element form above , again fidn min element and
    //  print it and pop top elemnt continue liek tha
    
    vector<int> isint ={2,5,1,7,3,0,4};
    // int isint[7]={2,5,1,7,3,0,4};
    printmin(isint);



    return 0;
}