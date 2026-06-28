#include<iostream>
using namespace std;

class Node{
public: 
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    
};



void Display(Node* head){
    Node* temp = head;
    while( temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;

}

Node* MiddleDel(Node* head ){
    //Edge Case
    if(head == nullptr || head -> next == nullptr){
        return nullptr;
    }
    Node* slow = head;
    Node* fast = head;
    Node* pre = nullptr;
    while(fast != NULL && fast -> next != NULL){
        pre = slow;
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    pre -> next = slow -> next;

    return head;
}

int main(){
    Node* head = new Node(2);
    Node* sec = new Node(1);
    // Node* third = new Node(3);
    // Node* four = new Node(4);
    // Node* five = new Node(5);
    // Node* six = new Node(6);
    // Node* sev = new Node(7);
    // Node* eig = new Node(8);

    head -> next = sec;
    // sec -> next = third;
    // third -> next = four;
    // five -> next = six;
    // six -> next = sev;
    // sev -> next = eig;
    Display(head);
    head = MiddleDel(head);
    cout<<endl<<"List after deletion of Middle : "<<endl;
    Display(head);

    return 0;
}