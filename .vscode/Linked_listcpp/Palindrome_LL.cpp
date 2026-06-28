#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int  val){
        this -> val = val;
        this -> next = NULL;
    }

    bool palindrome(Node* head){

        if (head == NULL || head->next == NULL) return true;

        //Finding Middle Element 
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast -> next != NULL){

            slow = slow -> next ;
            fast = fast -> next -> next;

        }


        // Reversing the Linked List

        
        Node* prev = NULL;
        Node* nex = NULL;
        
        while(slow != NULL){
            nex = slow -> next;
            slow -> next = prev;
            prev = slow;
            slow = nex;
        }

        //curr is New head of LL - 2

        Node* hed = head;//this is starting of LL - 1
        Node* deh = prev;//this is starting of LL - 2

        
        while(deh != NULL ){
            if(hed -> val != deh -> val){
                return false;
            }

            deh = deh -> next;
            hed = hed -> next;
        }

        return true;

    }
};
int main(){
    Node* head = new Node(1);
    Node* sec = new Node(2);
    Node* third = new Node(3);

    Node* four = new Node(2);
    Node* five = new Node(1);

    head -> next = sec;
    sec -> next = third;
    third -> next = four;
    four -> next = five;

    bool ans = head -> palindrome(head);

    cout<<ans<<endl;
    return 0;
}