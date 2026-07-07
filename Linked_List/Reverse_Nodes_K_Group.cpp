#include <iostream>
#include <vector>

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int cnt = 0;
        
        while (curr && cnt < k) { 
            curr = curr->next; 
            cnt++; 
        }
        if (cnt < k) return head; // not enough nodes
        
        // Reverse k nodes
        ListNode* prev = nullptr;
        ListNode* c = head;
        for (int i = 0; i < k; i++) {
            ListNode* nxt = c->next;
            c->next = prev; 
            prev = c; 
            c = nxt;
        }
        
        // Recurse for the remaining lists
        head->next = reverseKGroup(c, k);
        return prev;
    }
};

ListNode* createList(const vector<int>& values) {
    ListNode dummy(0);
    ListNode* curr = &dummy;
    for (int val : values) {
        curr->next = new ListNode(val);
        curr = curr->next;
    }
    return dummy.next;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution solution;

    // 1 -> 2 -> 3 -> 4 -> 5, k = 2
    ListNode* head = createList({1, 2, 3, 4, 5});
    int k = 2;

    cout << "Original list: ";
    printList(head);

    cout << "Reversing in groups of " << k << "..." << endl;
    ListNode* resultHead = solution.reverseKGroup(head, k);

    cout << "Result:        ";
    printList(resultHead);

    // Clean up memory
    while (resultHead) {
        ListNode* temp = resultHead;
        resultHead = resultHead->next;
        delete temp;
    }

    return 0;
}