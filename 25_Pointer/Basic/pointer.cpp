#include<iostream>
using namespace std ;

int main (){

    // basic decleration 
    // cout<<"Hn ji " <<endl ;
    // int num=9;
    // int *val=&num;
    // cout << num <<endl;
    // cout << &val <<endl;


    int numbers[3]={2,3,4};
    int *val=numbers;
    // this will print the second value meanse index of 1 value , first *val will store the base value which is 2 and then there is increasing the index value by 1 so then this will print the index value 2 value 
    cout << *(val+1) <<endl;
    // below line wil print the memory  address of val which stores the memory address of numbers  
    cout << &val <<endl;
    // hear we are printing the value of val which is storing the address of numbers base value means arrary first elemetn value 
    cout << val <<endl;   

    cout << &numbers <<endl;

    return 0 ;
}
