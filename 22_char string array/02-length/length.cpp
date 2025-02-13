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

    cout<<"hello ji" <<endl;

    char name[20];
    cout<<"enter your name ";
    cin >> name ;
    cout <<"your name is "<<name << endl ;

    cout<<"length of name is "<<findlength(name) << endl;


    return 0;
}