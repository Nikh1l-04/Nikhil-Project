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

    void Display(Node* head){
        Node* temp = head;
        while( temp != NULL){
            cout<<temp -> data<<" -> ";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;

    }

    Node* Middle(Node* head ){
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        return slow;
    }


};
int main(){
    Node* head = new Node(1);
    Node* sec = new Node(2);
    Node* third = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);
    Node* six = new Node(6);
    Node* sev = new Node(7);
    Node* eig = new Node(8);

    head -> next = sec;
    sec -> next = third;
    third -> next = four;
    four -> next = five;
    five -> next = six;
    six -> next = sev;
    sev -> next = eig;
    head -> Display(head);
    head = head -> Middle(head);
    cout<<endl<<"List from the Middle : ";
    head -> Display(head);

    return 0;
}