#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data ){
        this -> data = data;
        this -> next = NULL;
    }

    void printList(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp -> data <<"->";
            temp = temp -> next;
        }

    }

    void InsertHead(Node* head , int  val){
        Node* newNode = new Node(val);

        head = head -> newNode;


    }


};
int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    
    head->next = second;
    second->next = third;

    return 0;
}