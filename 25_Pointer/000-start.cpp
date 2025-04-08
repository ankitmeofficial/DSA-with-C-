#include <iostream>  
using namespace std;  

void firstpass(int *ptr ){
 cout <<ptr ;
}

void secpass(int *ptr ){
ptr=ptr+1;
}




int main()  {  

int num=4;
int *ptr = &num ;
// firstpass(ptr);
cout << "before "<<ptr << endl;
secpass(ptr);
cout << "after "<< ptr  << endl ;



/*
int n=34;
int * val = &n;
cout << val << endl ;

int arr[10]={3,4};
cout<< sizeof(arr) << endl;//10*4
cout<< sizeof(&arr) << endl; // hear it will show first element of arr size 
int *ptr=&arr[0];
cout<< *ptr << endl;
cout<< sizeof(ptr) << endl;

int n=34;
int *val = &n;
cout << val << endl ;
cout << &val << endl ;
*/


return 0 ;
}  





