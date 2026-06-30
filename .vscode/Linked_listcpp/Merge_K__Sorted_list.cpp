#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto cmp = [](ListNode* a, ListNode* b) { return a->val > b->val; };
        priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> pq(cmp);
        
        for (auto l : lists) {
            if (l) pq.push(l);
        }
        
        ListNode dummy(0), *curr = &dummy;
        while (!pq.empty()) {
            auto top = pq.top(); 
            pq.pop();
            curr->next = top; 
            curr = curr->next;
            if (top->next) pq.push(top->next);
        }
        return dummy.next;
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


    ListNode* l1 = createList({1, 4, 5});
    ListNode* l2 = createList({1, 3, 4});
    ListNode* l3 = createList({2, 6});

    vector<ListNode*> lists = {l1, l2, l3};

    cout << "Merging lists..." << endl;
    ListNode* mergedHead = solution.mergeKLists(lists);

    cout << "Result: ";
    printList(mergedHead);

    while (mergedHead) {
        ListNode* temp = mergedHead;
        mergedHead = mergedHead->next;
        delete temp;
    }

    return 0;
}