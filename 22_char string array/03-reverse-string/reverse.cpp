#include<iostream>
using namespace std ;

int name_lenght (char name []){
    int count=0;
    for (int i=0; name[i]!='\0';i++){
        count ++;
    }
    return count ;
}
void string_reverse(char str[] ,int n){
int s =0;
int e=n-1;
while (s<=e){
    swap(str[s++],str[e--]);
}

}

int main (){
    char name [20];
cout <<"enter name ";
cin >>name;
cout <<"your name is "<< name << endl;
int length_value= name_lenght(name);

cout<<"length of your name is "<< length_value <<endl;
string_reverse(name, length_value);
// print string afte reverse 
cout << "reversed string is "<<name <<endl;

    return 0;
}