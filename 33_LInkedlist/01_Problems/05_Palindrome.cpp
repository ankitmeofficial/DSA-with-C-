#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }
        
        // Step 1: Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Step 2: Reverse the second half
        ListNode* secondHalf = reverseList(slow->next);
        ListNode* firstHalf = head;
        
        // Step 3: Compare the two halves
        bool result = compareLists(firstHalf, secondHalf);
        
        // Step 4: Restore the list (optional)
        slow->next = reverseList(secondHalf);
        
        return result;
    }
    
private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        
        return prev;
    }
    
    bool compareLists(ListNode* l1, ListNode* l2) {
        while (l2 != nullptr) {
            if (l1->val != l2->val) {
                return false;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        return true;
    }
};

// Helper function to create a linked list from an array
ListNode* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < n; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Solution solution;
    
    // Test case 1: Palindrome (odd length)
    int arr1[] = {1, 2, 3, 2, 1};
    ListNode* list1 = createList(arr1, 5);
    cout << "List 1: ";
    printList(list1);
    cout << "Is palindrome? " << (solution.isPalindrome(list1) ? "Yes" : "No") << endl;
    
    // Test case 2: Not a palindrome
    int arr2[] = {1, 2, 3, 4, 5};
    ListNode* list2 = createList(arr2, 5);
    cout << "List 2: ";
    printList(list2);
    cout << "Is palindrome? " << (solution.isPalindrome(list2) ? "Yes" : "No") << endl;
    
    // Test case 3: Palindrome (even length)
    int arr3[] = {1, 2, 2, 1};
    ListNode* list3 = createList(arr3, 4);
    cout << "List 3: ";
    printList(list3);
    cout << "Is palindrome? " << (solution.isPalindrome(list3) ? "Yes" : "No") << endl;
    
    // Test case 4: Single element
    int arr4[] = {1};
    ListNode* list4 = createList(arr4, 1);
    cout << "List 4: ";
    printList(list4);
    cout << "Is palindrome? " << (solution.isPalindrome(list4) ? "Yes" : "No") << endl;
    
    return 0;
}