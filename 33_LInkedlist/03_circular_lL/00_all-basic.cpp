#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    // Check if the list is empty
    bool isEmpty() {
        return head == nullptr;
    }

    // Insert at the front of the list
    void insertAtFront(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            head = newNode;
            newNode->next = head; // Circular reference
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    // Insert at the end of the list
    void insertAtLast(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    // Insert at a specific position (0-based indexing)
    void insertAtPosition(int val, int pos) {
        if (pos < 0) {
            cout << "Invalid position!" << endl;
            return;
        }
        if (pos == 0) {
            insertAtFront(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
            if (temp == head) {
                cout << "Position out of range!" << endl;
                return;
            }
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete from the front of the list
    void deleteFromFront() {
        if (isEmpty()) {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->next == head) { // Only one node
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            Node* toDelete = head;
            temp->next = head->next;
            head = head->next;
            delete toDelete;
        }
    }

    // Delete from the end of the list
    void deleteFromLast() {
        if (isEmpty()) {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->next == head) { // Only one node
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            Node* prev = nullptr;
            while (temp->next != head) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = head;
            delete temp;
        }
    }

    // Delete from a specific position (0-based indexing)
    void deleteFromPosition(int pos) {
        if (isEmpty()) {
            cout << "List is empty!" << endl;
            return;
        }
        if (pos < 0) {
            cout << "Invalid position!" << endl;
            return;
        }
        if (pos == 0) {
            deleteFromFront();
            return;
        }
        Node* temp = head;
        Node* prev = nullptr;
        for (int i = 0; i < pos; i++) {
            prev = temp;
            temp = temp->next;
            if (temp == head) {
                cout << "Position out of range!" << endl;
                return;
            }
        }
        prev->next = temp->next;
        delete temp;
    }

    // Display the list
    void display() {
        if (isEmpty()) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "HEAD" << endl;
    }

    // Destructor to free memory
    ~CircularLinkedList() {
        if (isEmpty()) return;
        Node* current = head;
        Node* nextNode;
        do {
            nextNode = current->next;
            delete current;
            current = nextNode;
        } while (current != head);
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertAtFront(10);
    cll.insertAtFront(20);
    cll.insertAtLast(30);
    cll.insertAtPosition(40, 1);
    cll.display(); // Output: 20 -> 40 -> 10 -> 30 -> HEAD

    cll.deleteFromFront();
    cll.deleteFromLast();
    cll.deleteFromPosition(1);
    cll.display(); // Output: 40 -> 10 -> HEAD

    return 0;
}