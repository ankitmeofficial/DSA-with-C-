#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int conval)
    {
        val = conval;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    // Insert at front
    void insertFront(int val)
    {
        Node *new_node = new Node(val);

        if (head == NULL)
        {
            head = tail = new_node;
        }
        else
        {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
        size++;
    }

    // Insert at tail
    void insertTail(int val)
    {
        Node *new_node = new Node(val);

        if (tail == NULL)
        {
            head = tail = new_node;
        }
        else
        {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        size++;
    }

    // Insert at specific position (0-based)
    void insertAt(int val, int pos)
    {
        if (pos < 0 || pos > size)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        if (pos == 0)
        {
            insertFront(val);
            return;
        }

        if (pos == size)
        {
            insertTail(val);
            return;
        }

        Node *new_node = new Node(val);
        Node *current = head;

        for (int i = 0; i < pos - 1; i++)
        {
            current = current->next;
        }

        new_node->next = current->next;
        new_node->prev = current;
        current->next->prev = new_node;
        current->next = new_node;

        size++;
    }

    // Delete from front
    void deleteFront()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;

        if (head != NULL)
        {
            head->prev = NULL;
        }
        else
        {
            tail = NULL;
        }

        delete temp;
        size--;
    }

    // Delete from tail
    void deleteTail()
    {
        if (tail == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }

        Node *temp = tail;
        tail = tail->prev;

        if (tail != NULL)
        {
            tail->next = NULL;
        }
        else
        {
            head = NULL;
        }

        delete temp;
        size--;
    }

    // Delete from specific position (0-based)
    void deleteAt(int pos)
    {
        if (pos < 0 || pos >= size)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        if (pos == 0)
        {
            deleteFront();
            return;
        }

        if (pos == size - 1)
        {
            deleteTail();
            return;
        }

        Node *current = head;
        for (int i = 0; i < pos; i++)
        {
            current = current->next;
        }

        current->prev->next = current->next;
        current->next->prev = current->prev;

        delete current;
        size--;
    }

    // Display the list from head to tail
    void displayForward()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Display the list from tail to head
    void displayBackward()
    {
        Node *temp = tail;
        while (temp != NULL)
        {
            cout << temp->val << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }

    // Get current size of the list
    int getSize()
    {
        return size;
    }
};

int main()
{
    DoublyLinkedList dll;

    cout << "Inserting at front: 1, 2, 3" << endl;
    dll.insertFront(1);
    dll.insertFront(2);
    dll.insertFront(3);
    dll.displayForward(); // 3 <-> 2 <-> 1 <-> NULL

    cout << "Inserting at tail: 4, 5" << endl;
    dll.insertTail(4);
    dll.insertTail(5);
    dll.displayForward(); // 3 <-> 2 <-> 1 <-> 4 <-> 5 <-> NULL

    cout << "Inserting 10 at position 2" << endl;
    dll.insertAt(10, 2);
    dll.displayForward(); // 3 <-> 2 <-> 10 <-> 1 <-> 4 <-> 5 <-> NULL

    cout << "Deleting from front" << endl;
    dll.deleteFront();
    dll.displayForward(); // 2 <-> 10 <-> 1 <-> 4 <-> 5 <-> NULL

    cout << "Deleting from tail" << endl;
    dll.deleteTail();
    dll.displayForward(); // 2 <-> 10 <-> 1 <-> 4 <-> NULL

    cout << "Deleting at position 1" << endl;
    dll.deleteAt(1);
    dll.displayForward(); // 2 <-> 1 <-> 4 <-> NULL

    cout << "Displaying backward:" << endl;
    dll.displayBackward(); // 4 <-> 1 <-> 2 <-> NULL

    cout << "Current size: " << dll.getSize() << endl;

    return 0;
}