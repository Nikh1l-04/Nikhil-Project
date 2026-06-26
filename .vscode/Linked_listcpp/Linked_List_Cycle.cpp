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

   
    Node* detect(Node* head){
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;

            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow -> next ;
                    fast = fast -> next;
                }
                return slow;
            }
        }
    }

    void display(Node* ans){
        cout<<ans -> val;
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


    head -> next = sec;
    sec -> next = third;
    third -> next = four;
    four -> next = five;
    five -> next = six;
    six -> next = sev;

    sev -> next =  four; //form a cycle

    Node* ans = head -> detect(head);

    ans -> display(ans);

}