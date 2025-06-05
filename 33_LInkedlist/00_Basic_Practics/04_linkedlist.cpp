#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Insert at front
    void insertFront(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Insert at specific position (0-based index)
    void insertAtPosition(int val, int pos) {
        if (pos < 0) {
            cout << "Invalid position\n";
            return;
        }

        if (pos == 0) {
            insertFront(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* current = head;
        int currentPos = 0;

        // Traverse to the node before the insertion point
        while (current != nullptr && currentPos < pos - 1) {
            current = current->next;
            currentPos++;
        }

        if (current == nullptr) {
            cout << "Position out of range\n";
            delete newNode;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    // Delete from front
    void deleteFront() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Delete from tail
    void deleteTail() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        Node* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }

        delete current->next;
        current->next = nullptr;
    }

    // Delete from specific position (0-based index)
    void deleteAtPosition(int pos) {
        if (head == nullptr || pos < 0) {
            cout << "Invalid operation\n";
            return;
        }

        if (pos == 0) {
            deleteFront();
            return;
        }

        Node* current = head;
        int currentPos = 0;

        // Traverse to the node before the one to delete
        while (current->next != nullptr && currentPos < pos - 1) {
            current = current->next;
            currentPos++;
        }

        if (current->next == nullptr) {
            cout << "Position out of range\n";
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    // Display the list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL\n";
    }

    // Destructor to free memory
    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;

    // Insert operations
    list.insertFront(30);  // List: 30 -> NULL
    list.insertFront(20);  // List: 20 -> 30 -> NULL
    list.insertFront(10);  // List: 10 -> 20 -> 30 -> NULL
    list.insertAtPosition(25, 2);  // List: 10 -> 20 -> 25 -> 30 -> NULL
    list.insertAtPosition(5, 0);   // List: 5 -> 10 -> 20 -> 25 -> 30 -> NULL

    cout << "Initial list: ";
    list.display();

    // Delete operations
    list.deleteFront();  // List: 10 -> 20 -> 25 -> 30 -> NULL
    cout << "After deleting front: ";
    list.display();

    list.deleteTail();   // List: 10 -> 20 -> 25 -> NULL
    cout << "After deleting tail: ";
    list.display();

    list.deleteAtPosition(1);  // List: 10 -> 25 -> NULL
    cout << "After deleting at position 1: ";
    list.display();

    return 0;
}