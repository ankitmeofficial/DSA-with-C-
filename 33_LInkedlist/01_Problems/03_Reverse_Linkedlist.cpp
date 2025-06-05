#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void Insertval(Node *&head, int val)
{
    Node *new_val = new Node(val);
    new_val->next = head;
    head = new_val;
};

void Displayval(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << " NULL " << endl;
};

Node* ReverseLL(Node* &head ){
    Node* preptr = NULL;
    Node* currentptr =head ;
    // nextptr = current->next ;
    // current->next=preptr ;
    // preptr=current;
    // current=nextptr;
    // nextptr=nextprt->next;

    while(currentptr!=NULL){
        Node* nextptr=currentptr->next;
        currentptr->next=preptr;
        preptr=currentptr;
        currentptr=nextptr;
    }
    Node* new_node= preptr;
    return preptr;
};




int main()
{
    Node *head = NULL;
    Insertval(head, 1);
    Insertval(head, 2);
    Insertval(head, 3);
    Insertval(head, 4);
    Insertval(head, 5);
    Displayval(head);

    head = ReverseLL(head);
    Displayval(head);

    return 0;
}
