#include <iostream>
using namespace std;
class Node {
public:
    int val ;
    Node* next ;
    Node* prev ;
    Node(int data){
        val=data ;
        next= NULL;
        prev=NULL;
    }
};

class Doublylinkedlist{
public:
    Node* head ;
    Node* tail ;
        Doublylinkedlist(){
            head=NULL;
            tail=NULL;
        }
    void InserAtFront(int val ){
        Node* newnode= new Node(val );
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }
    void Display(){
    Node* temp = head;
    while(temp){
        cout<< temp->val << "<->";
        temp=temp->next;
    };

};

};



int main (){

Doublylinkedlist dll;
dll.InserAtFront(1);
dll.InserAtFront(2);
dll.InserAtFront(3);
dll.Display();

    return 0; 
}