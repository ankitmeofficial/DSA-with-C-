#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    private:
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        // Node newNode(val);
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next=head;
            head = newNode;
        }
    }
    void display(){
        Node* temp =head;
        while(temp!=NULL){
            cout << temp->data << endl;
            temp=temp->next;
        }
    }
};

int main(){
    List l1;
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);
    l1.push_front(5);

    l1.display();
return 0;
}
