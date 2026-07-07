#include<iostream>
#include<unordered_map>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* random;

    Node(int val){
        this -> val = val;
        this -> next = NULL;
        this -> random = NULL;
    }
};
void Display(Node* head){
    Node* temp = head;
    while( temp != NULL){
        cout<<temp -> val<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;

}

Node* copy(Node* head){
    if(head == nullptr){
        return nullptr;
    }
    Node* nhead = new Node(head -> val);
    Node* ntemp = nhead;
    Node* otemp = head -> next;
    unordered_map<Node* , Node*> mp;
    mp[head] = nhead;
    while(otemp != NULL){
        Node* cop = new Node(otemp -> val);
        mp[otemp] = cop;
        ntemp -> next = cop;
        ntemp = ntemp -> next;
        otemp = otemp -> next;
    }

    otemp = head;
    ntemp = nhead;
    while(otemp != NULL){
        ntemp -> random = mp[otemp -> random];
        ntemp = ntemp -> next;
        otemp = otemp -> next;

    }
    return nhead;

}

int main(){
    Node* head = new Node(7);
    Node* node2 = new Node(13);
    Node* node3 = new Node(11);
    Node* node4 = new Node(10);
    Node* node5 = new Node(1);

    // 2. Setup the regular 'next' pointers
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    head->random = NULL;        // 7's random points to NULL
    node2->random = head;       // 13's random points back to 7
    node3->random = node5;       // 11's random points forward to 1
    node4->random = node3;       // 10's random points back to 11
    node5->random = head;       // 1's random points back to 7
    Display(head);
    head = copy(head);
    Display(head);
    return 0;
}