#include<iostream>
#include <string>
using namespace std;

string lenfinder(string s, string part){
    int str=0;
    int pstr=0;
while (str<s.length()){

    if (s[str]==part[pstr]&&s[str+1]==part[pstr+1]&&s[str+2]==part[pstr+2]){
        s.replace(str,2,"");
    }
    else{
        str+=1;
    }
}
return s;
}

int main(){
    string hello =" daabcbaabcbc" ;
    string hellopart="abc";
string test1=lenfinder(hello , hellopart);
cout<<"final string is "<< test1;
   

    return 0;
}