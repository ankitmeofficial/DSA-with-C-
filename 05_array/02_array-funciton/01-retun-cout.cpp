#include <iostream>
using namespace std;

// this function value you can not resude menad not store in a variable and print that variabe , when you will try to print it will not give the funtion accurate value 

int findingsum(int a , int b ){
    int sum =a+b;
    cout << "sum is " << " " << sum << endl ;
}


// this function  value can be reuse 
int findingdiff(int a , int b ){
   return a+b;
}

int main()
{
   int number1=2;
   int number2=4;
   findingsum(number1 , number2);                               //output for this will be = " sum is 6 "

  // int firstsum =findingsum(number1 , number2);                //output for this will be = " sum is 6 " but this is not good practics 
   //cout<< "first addition is " << " "<< firstsum << endl;

int firstdiff= findingdiff(4,2);
cout << "first diff is  " << " "<< firstdiff  << endl;

cout << "we have find diff of two number is " << firstdiff << endl ;


}



