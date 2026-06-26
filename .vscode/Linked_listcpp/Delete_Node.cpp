#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data ;
        this -> next = NULL;
    }

    void Display(Node* head){
        Node* temp = head;
    
        while(temp != NULL){
            cout<<temp -> data<<" -> ";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }

    void deleteNode(Node* curr) {
        Node* nex = curr->next;
    
        curr->data = nex->data;
    
        curr->next = nex->next;
        delete nex;
    }
};
int main(){
    Node* head = new Node(1);
    Node* sec = new Node(2);
    Node* third = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);

    head -> next = sec;
    sec -> next = third;
    third -> next = four;
    four -> next = five;
    cout<<"Original List"<<endl;
    head -> Display(head);
    cout<<"List after deletion of 3 "<<endl;
    third -> deleteNode(third);
    head -> Display(head);
    return 0;
}