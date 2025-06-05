#include <iostream> 
using namespace std ; 
class Node {
    public:
    int val ; 
    Node* next ;
        Node(int oneval ){
            val = oneval;
            next=NULL;
        }
};

int insert_at_front(Node* &head , int val ){
    Node* newNode= new Node(val);
    newNode->next=head ;
    head=newNode;
};

int Display(Node *head ){
    Node * temp = head ;
    while(temp){
        cout<< temp->val << "-> " ;
        temp= temp->next;
    }
    cout << "NULL"<< endl;
};


int main (){
    Node* head=NULL;
    insert_at_front(head , 1);
    insert_at_front(head , 2);
    insert_at_front(head , 3);

    Display(head);

    return 0 ;
}