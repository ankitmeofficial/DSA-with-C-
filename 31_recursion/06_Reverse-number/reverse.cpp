#include <iostream>
using namespace std;
int let_rev(int num){
    if (num ==1){
        return true ;
    }
    cout << num << endl;
    
    return let_rev(num-1);


}
int main (){
    int n;
cout<<"enter a number  ";
cin >> n;
cout << let_rev(n);

    return 0 ;
}