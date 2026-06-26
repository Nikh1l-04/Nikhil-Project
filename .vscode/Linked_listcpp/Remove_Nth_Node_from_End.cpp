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



    Node* Remove(Node* head , int n){
        Node* slow = head;
        Node* fast = head;
        for(int i = 0; i < n ; i++){
            fast = fast -> next;
        }

        if(fast == NULL){
            Node* newHead = head -> next;
            delete head;
            return newHead;
        }

        while(fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next;
        }
        
        Node* todelete = slow -> next;
        slow -> next = slow -> next -> next;
        delete todelete;
        return head;
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

    int n;
    cout<<"Enter the n to remove from the end: ";
    cin>>n;

    cout<<"List after deletion  "<<endl;
    head  = head -> Remove(head , n);
    head -> Display(head);
    return 0;
}