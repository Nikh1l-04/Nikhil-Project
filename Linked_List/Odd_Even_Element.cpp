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

    void Display(Node* head){
        Node* temp = head;
    
        while(temp != NULL){
            cout<<temp -> val<<" -> ";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }

    Node* EvenOdd(Node* head){
        if(head == NULL || head -> next == NULL){
            return head;
        }

        Node* even = head -> next;
        Node* odd = head;
        Node* evenHead = head -> next;
        while(even != NULL && even -> next != NULL){
            odd -> next = even -> next;
            odd = odd -> next ;

            even -> next = odd -> next;
            even = even -> next;
            
        }

        odd -> next = evenHead;
        

        return head;
    }
};
int main(){
    Node* head = new Node(2);
    Node* sec = new Node(1);
    Node* third = new Node(3);

    Node* four = new Node(5);
    Node* five = new Node(6);

    head -> next = sec;
    sec -> next = third;
    third -> next = four;
    four -> next = five;

    head -> Display(head);
    head = head -> EvenOdd(head);
    head -> Display(head);
    return 0;
}