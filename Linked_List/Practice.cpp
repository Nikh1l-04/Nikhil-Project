#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        next = NULL;
    }

    void Display(Node* head){
        Node* temp = head;

        while(temp != NULL){
            cout<<temp -> data<<"->";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    Node* head = new Node(30);
    Node* second = new Node(20);
    Node* third = new Node(10);
    
    head->next = second;
    second->next = third;
    head -> Display(head);
    return 0;
}