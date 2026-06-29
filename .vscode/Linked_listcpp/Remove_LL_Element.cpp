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

Node* removeE(Node* head, int ele) {
   
    Node* dummy = new Node(-1);
    dummy->next = head;
    
    Node* curr = dummy;
    
    while (curr->next != nullptr) {
        if (curr->next->data == ele) {
            Node* toDelete = curr->next;
            
            // Bypass the node
            curr->next = curr->next->next;
            
            delete toDelete; // Clear memory 

        } else {
            curr = curr->next;
        }
    }
    
    Node* newHead = dummy->next;
    delete dummy; 
    return newHead;
}

int main(){
    Node* head = new Node(1);
    Node* sec = new Node(2);
    Node* third = new Node(6);
    Node* four = new Node(3);
    Node* five = new Node(4);
    Node* six = new Node(5);
    Node* sev = new Node(6);
    Node* eig = new Node(8);

    head -> next = sec;
    sec -> next = third;
    third -> next = four;
    four -> next = five;
    five -> next = six;
    six -> next = sev;
    sev -> next = eig;
    Display(head);
    int ele;
    cout<<"Enter the elment to be remove : ";
    cin>>ele;
    head = removeE(head , ele);
    cout<<endl<<"List after deletion val : "<<endl;
    Display(head);

    return 0;
}