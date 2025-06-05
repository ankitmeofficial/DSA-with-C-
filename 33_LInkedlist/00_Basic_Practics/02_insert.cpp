#include <iostream>
using namespace std ;

class Node {
    public:
    int val ;
    Node* next ;
        Node (int conval){
            val= conval;
            next= NULL;
        }
};

void Insertvalue(Node* &head , int val ){
    Node* new_node= new Node (val);
    new_node->next =head;
    head=new_node;
};

void Displayvalue(Node * head ){
    Node* temp = head ;
    while (temp!=NULL){
        cout << temp->val<< "->";
        temp= temp->next;
    }
    cout<< "NULL" << endl;

}



int main (){
Node* head=NULL;
Insertvalue(head , 1 );
Displayvalue(head);
Insertvalue(head , 4);
Displayvalue(head);
    


return 0 ;
}
