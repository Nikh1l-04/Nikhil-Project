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
    
        while(temp != NULL){
            cout<<temp -> data<<" -> ";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }

    bool detect(Node* head){
        Node* slow = head;
        Node* fast = head;

        while(fast !=  NULL && fast -> next != NULL){
            slow = slow -> next ;
            fast =  fast -> next -> next;

            if(slow == fast){
                return true;
            }

        }
        return false;
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

    // five -> next = third; //form a cycle
    bool ans = head -> detect(head);
    cout << (ans ? "True" : "False") << endl;


}