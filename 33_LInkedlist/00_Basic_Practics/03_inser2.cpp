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
void InsertatTail(Node* &head, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void InsertNthpos(Node* &head, int val, int pos)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    int cur_pos = 0;
    if (pos < 0)
    {
        cout << "invaled postion " << endl;
        return;
    }
    if (pos == 0)
    {
        Insertval(head, val);
        return;
    }
    while (temp != NULL && cur_pos < pos - 1)
    {
        temp = temp->next;
        cur_pos++;
    }
    if (temp == NULL)
    {
        cout << "position is out of range " << endl;
    }
    new_node->next = temp->next;
    temp->next = new_node;
};



int main()
{
    Node *head = NULL;
    Insertval(head, 4);
    Displayval(head);
    Insertval(head, 7);
    Displayval(head);
    InsertatTail(head, 9);
    Displayval(head);
    InsertNthpos(head, 9, 0);
    Displayval(head);
    return 0;
}
