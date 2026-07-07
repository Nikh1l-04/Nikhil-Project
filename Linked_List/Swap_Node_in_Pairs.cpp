#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this -> val = val;
        this -> next = NULL;
    }
};

void Display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> val<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

Node* pairSwap(Node* head){
    //Base Case
    if(head == NULL || head -> next == NULL){
        return NULL;
    }

    Node* first = head;
    Node* sec = head -> next;
    Node* prev = NULL;

    while(first != NULL && sec != NULL){
        Node* third = sec -> next;

        sec -> next = first;
        first -> next = third;

        if(prev == NULL){
            head = sec;
        }else{
            prev -> next = sec;
        }

        prev = first;
        first = third;
        if(third != NULL){
            sec = third -> next;
        }else{
            sec = NULL;
        }
    }
    return head;
}
int main(){
    Node* head = new Node(2);
    Node* sec = new Node(1);
    // Node* third = new Node(3);

    // Node* four = new Node(5);
    // Node* five = new Node(6);

    head -> next = sec;
    // sec -> next = third;
    // third -> next = four;
    // four -> next = five;
    cout<<"Original List : "<<endl;
    Display(head);
    cout<<"List after Swapping Nodes : "<<endl;
    head = pairSwap(head);
    Display(head);

}