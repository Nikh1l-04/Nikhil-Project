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
};
void Display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> val<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}
Node* Reorder(Node* head){
    //Edge Case 

    if(head == NULL || head -> next == NULL){
        return head;
    }
    //Finding the Middle term

    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    //Reversing the 2nd Part

    Node* prev = NULL;
    Node* nxt = NULL;
    while(slow != NULL){
        nxt = slow -> next;
        slow -> next = prev;
        prev = slow;
        slow = nxt;

    }

    //Main Logic

    Node* temp = head;
    Node* tem = prev;
    while(tem != NULL){
        Node* nxt1 = temp -> next;
        Node* nxt2 = tem -> next;

        temp -> next = tem;
        temp = nxt1;

        tem -> next = temp;
        tem = nxt2;
    }

    return head;

}
int main(){
    Node* head = new Node(1);
    Node* sec = new Node(2);
    Node* third = new Node(3);

    Node* four = new Node(4);
    // Node* five = new Node(5);

    head -> next = sec;
    sec -> next = third;
    third -> next = four;
    // four -> next = five;
    cout<<"Before Reorder : "<<endl;
    Display(head);
    cout<<"After Reorder : "<<endl;

    head = Reorder(head);
    Display(head);

}