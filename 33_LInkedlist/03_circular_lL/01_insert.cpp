#include <iostream>
using namespace std;

class Node
{
public:
    int val = 0;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class circlearLL
{
public:
    Node *head;

    circlearLL()
    {
        head = NULL;
    }

    void insertatstart(int val)
    {
        Node *newval = new Node(val);
        if (head == NULL)
        {
            head = newval;
            head->next = head; // looping for circular linked list
            return;
        }
        Node *tail = head;

        while (tail->next != head)
        {
            tail = tail->next;
        }
        // now it is pointing to last node
        tail->next = newval;
        newval->next = head;
        head = newval;
    }
    void Display()
    {
        if (head==NULL ){
            return;
        }
        Node *temp = head;
        do
        {
            cout << temp->val << "<->";
            temp = temp->next;
        } while (temp!=head);
        cout<<endl;
    }
    void Displaycll(){
        Node* temp=head ;
        for(int i=0;i<15;i++){
            cout <<temp->val << "<->";
            temp=temp->next;
        }
    }
};

int main()
{
    circlearLL LL;
    LL.insertatstart(1);
    LL.insertatstart(2);
    LL.insertatstart(3);
    LL.Display();
    LL.Displaycll();
    return 0;
}
