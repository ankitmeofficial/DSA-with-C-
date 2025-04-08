#include<iostream>
#include<vector>
using namespace std ;

void arrange(vector<int>& num1){
    int s=num1.size();
    for (int i=0 ; i<s ; i++){
        if (num1[i]==0){
            num1[i]=num1[i+1];
        }

    }

}



int main (){

    vector<int> num2={0,2,3,0,5};

 arrange(num2);
    cout<< "final resul is "<< endl;

    for (int i=0 ; i<num2.size(); i++){
        cout << num2[i] << " " ;
    }

    
    return 0;

}