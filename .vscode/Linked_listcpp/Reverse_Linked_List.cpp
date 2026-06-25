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

    void Display(Node* head){// printing the linked list
        Node* temp = head;
        while(temp != NULL){
            cout<< temp -> data<<" -> ";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }

    Node* reverse(Node* head){// Reversing the linked list
        Node* temp = head;
        Node* prev = NULL;
        Node* nex = NULL;
        
        while(temp != NULL){
            nex = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = nex;
        }
        return prev;

    }
};
int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);
    Node* six = new Node(6);

    head -> next = second;
    second -> next = third;
    third -> next = four;
    four -> next = five;
    five -> next = six;
    head -> Display(head);

    cout<<endl<<"Let's Rverse this Linked List"<<endl;

    head = head->reverse(head);

    head -> Display(head);


    return 0;
}