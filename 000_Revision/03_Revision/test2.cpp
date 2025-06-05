#include <iostream>  
#include <algorithm>
using namespace std;  


int main()  
{  

int myarr[5]={1,3,6,5,0};
for ( int i=0 ; i<5; i++){
    cout<< myarr[i] << endl;
}

sort(myarr, myarr+5);
for ( int j=0 ; j<5; j++){
    cout<< myarr[j] << endl;
}

cout<< "Hn ji ";    
return 0 ;
}  





