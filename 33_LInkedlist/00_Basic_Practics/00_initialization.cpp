#include <iostream>  
using namespace std;  

struct Number{
int num ; 
Number* next;
};

int main()  {  
    Number* n1= new Number();
    Number* n2= new Number();
    Number* n3= new Number();


    n1->num=1;
    n1->next=n2;

    n2->num=2;
    n2->next=n3;

    n3->num = 3;
    n3->next=nullptr;

    Number* temp =n1;
    while(temp!=nullptr ){
        cout<<temp->num << endl;
        temp = temp->next;
    }  
    return 0 ;
}  


