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

void RemoveFormTailAtKthPosition(Node* &head , int k ){
    Node* slow= head ;
    Node* fast = head ;
    // fast ko kth position tk aage bhejo
        for (int i=0 ; i<k ; i++){
            if(!fast) return;
            fast=fast->next;
        }
    // if head is null then delete the head 
    if(!fast){
        Node *temp = head ;
        head=head->next;
        delete(temp);
        return;
    }
    // fast ko null hone tk aage badhawo 
    while(fast->next){
        fast=fast->next;
        slow=slow->next;
    }
    // delete the node 
    Node * temp = slow->next;
    slow->next=slow->next->next;
    delete(temp);
}



int main()
{
    Node *head = NULL;
    Insertval(head, 1);
    Insertval(head, 2);
    Insertval(head, 3);
    Insertval(head, 4);
    Insertval(head, 5);
    Displayval(head);
    RemoveFormTailAtKthPosition(head , 2);
    Displayval(head);

    return 0;
}
