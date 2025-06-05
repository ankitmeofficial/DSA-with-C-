#include <iostream>  
using namespace std;  

class Node {
    public:
        int val;
        Node * next;
    Node (int data){
        val=data;
        next=NULL;
        }
};
void FrontInsert(Node* &head , int val ){
    Node * New_node=new Node(val);
    New_node->next=head ;
    head=New_node;
};

void Display(Node* head ){
    Node* temp=head ;
    while (temp!=NULL)
    {
        cout << temp->val << " -> " ;
        temp=temp->next;
    }
    cout << " NULL" <<endl;
    
};

void Delete_front(Node* &head){
    Node* temp =head ;
    head=head->next;
    delete(temp);
};
void Delete_tail(Node* &head){
    if (head==NULL){
        cout <<"Linked list empty "<< endl;
        return;
    }
    if (head->next==NULL){
        delete(head);
        head=nullptr;
        return;
    }
    Node* Current= head ;
    while(Current->next->next!=NULL){
        Current=Current->next;
    }
    delete(Current->next);
    Current->next=NULL;
};
int main()  
{  
Node* head =NULL;
FrontInsert(head , 1);
FrontInsert(head , 2);
FrontInsert(head , 3);
FrontInsert(head , 4);
FrontInsert(head , 5);
Display(head);
// Delete_front(head);
// Display(head);
Delete_tail(head);
Display(head);



    return 0 ;
}  