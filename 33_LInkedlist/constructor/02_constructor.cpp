#include <iostream>  
using namespace std;  

class tea {

private:
    int time ;
public:
    string ingredince;
    tea(){
        ingredince="Water";
        time = 8;
    }
// to access the private variables you need to create a method for it and then like a function (method) , you need to call also . 
int getime(){
    return time ;
}

};

int main()  
{  
    tea firstea;
    cout << firstea.ingredince << endl;
    cout << firstea.getime() <<endl;
    return 0 ;
}  