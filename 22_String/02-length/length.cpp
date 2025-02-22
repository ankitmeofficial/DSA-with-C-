#include <iostream>
using namespace std;

int findlength(char name[] ){
    int count =0;
for (int i=0; name[i]!='\0' ;i++){
    count++;
}
return count;
}
int main (){


    char name[20];
    cout<<"enter your name ";
    cin >> name ;
    cout <<"your name is "<<name << endl ;
    cout<<"length of name is "<<findlength(name) << endl;


    string myaddress="this is my address";
    cout<<"length of above stirng is "<< myaddress.length()<< endl;
   
    return 0;
}