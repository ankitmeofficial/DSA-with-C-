#include <iostream>
using namespace std ;


// in this problem find index number of key if not there return -1;
int findneeded(int arr[] , int size , int key){
    for (int i =0; i<=size ; i++){
        if (arr[i]==key){
            return i;
        }       
    }
    return -1;
}


int main(){
int myarray[3]={1,2,3};
int needed = 3;

int indexis=findneeded(myarray , 3, needed);
if (indexis ==-1){
    cout << " element is not find ";
}
else {
    cout<<"element is on index number : "<< indexis ;
}

    return 0;
}