#include <iostream>
#include <vector>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node() : val(0), prev(nullptr), next(nullptr), child(nullptr) {}
    Node(int _val) : val(_val), prev(nullptr), next(nullptr), child(nullptr) {}
};

// Solution Class containing your logic
class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;
        while (curr) {
            if (curr->child) {
                Node* child = curr->child;
                Node* next = curr->next;
                
                // Find child tail
                Node* tail = child;
                while (tail->next) {
                    tail = tail->next;
                }
                
                // Stitch
                curr->next = child; 
                child->prev = curr;
                
                tail->next = next; 
                if (next) next->prev = tail;
                
                curr->child = nullptr;
            }
            curr = curr->next;
        }
        return head;
    }
};

// Helper function to print the flattened doubly linked list forward and backward
void printFlattnedList(Node* head) {
    Node* tail = nullptr;
    cout << "Forward:  ";
    while (head) {
        cout << head->val;
        if (head->next) cout << " <-> ";
        tail = head;
        head = head->next;
    }
    cout << endl;

    cout << "Backward: ";
    while (tail) {
        cout << tail->val;
        if (tail->prev) cout << " <-> ";
        tail = tail->prev;
    }
    cout << endl;
}

int main() {
    Solution solution;

    // Creating an example multilevel list:
    // 1 <-> 2 <-> 3
    //       |
    //       7 <-> 8
    
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n7 = new Node(7);
    Node* n8 = new Node(8);

    // Main level connections
    n1->next = n2; n2->prev = n1;
    n2->next = n3; n3->prev = n2;

    // Child level connections
    n2->child = n7;
    n7->next = n8; n8->prev = n7;

    cout << "Flattening the multilevel list..." << endl;
    Node* flatHead = solution.flatten(n1);

    printFlattnedList(flatHead);

    // Clean up memory
    while (flatHead) {
        Node* temp = flatHead;
        flatHead = flatHead->next;
        delete temp;
    }

    return 0;
}