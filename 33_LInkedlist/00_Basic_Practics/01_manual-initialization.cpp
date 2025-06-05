#include <iostream>  
using namespace std;  

struct Record {
int data  ;
Record* next ;
};
int main()  {  
   Record* r1 = new Record();
   Record* r2 = new Record();
   Record* r3 = new Record();

   r1->data=1;
   r2->data=2;
   r3->data=3;

   r1->next=r2;
   r2->next=r3;
   r3->next=nullptr;

Record* temp = r1;
while (temp != nullptr){
    cout << temp->data << endl;
    temp=temp->next;
}
    return 0 ;
}  