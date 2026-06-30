#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0), *curr=&dummy;
        int carry=0;
        // Fix: Added the logical '||' operators which were missing from the copy-paste
        while (l1 || l2 || carry) {
            int sum = carry;
            if (l1) { sum+=l1->val; l1=l1->next; }
            if (l2) { sum+=l2->val; l2=l2->next; }
            carry = sum/10;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
        }
        return dummy.next;
    }
};

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating List 1: 2 -> 4 -> 3  (represents 342)
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Creating List 2: 5 -> 6 -> 4  (represents 465)
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    cout << "List 1: ";
    printList(l1);
    cout << "List 2: ";
    printList(l2);

    Solution solver;
    ListNode* result = solver.addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(result); // Expected output: 7 -> 0 -> 8 (represents 807)

    return 0;
}