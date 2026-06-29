#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next ;
    Node* prev;
    Node(int val){
        this -> val = val;
        next = prev = NULL;
    }
};

class DoublyLL{
public:
    Node* head;
    Node* tail;
    DoublyLL(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode -> next = head;
            head -> prev = newNode;
            head = head -> prev;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        }else{
            newNode -> prev = tail;
            tail -> next = newNode;
            
            tail = newNode;
        }
    }

    void delet(int val){

    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp -> val<<" <=> ";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    cout<<"From Push Back "<<endl;
    DoublyLL dll;
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.print();
    
    cout<<"From Push Front "<<endl;
    DoublyLL dll2;
    dll2.push_front(1);
    dll2.push_front(2);
    dll2.push_front(3);
    dll2.print();

    return 0;

}