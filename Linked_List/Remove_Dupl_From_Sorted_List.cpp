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

    void Display(Node* head){// printing the linked list
        Node* temp = head;
        while(temp != NULL){
            cout<< temp -> data<<" -> ";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }

    Node* removeDupl(Node* head){
        Node* temp = head;
        while(temp -> next != NULL){
            if(temp -> data == temp -> next -> data){
                Node* nex = temp->next;
    
                temp->data = nex->data;
    
                temp->next = nex->next;
                delete nex;
            }

            temp = temp -> next;
        }

        return head;

    }
};
int main(){
    Node* head = new Node(1);
    Node* second = new Node(1);
    Node* third = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(4);
    Node* six = new Node(6);

    head -> next = second;
    second -> next = third;
    third -> next = four;
    four -> next = five;
    five -> next = six;
    head -> Display(head);

    cout<<endl<<"After Removing Duplicates : "<<endl;

    head = head->removeDupl(head);

    head -> Display(head);


    return 0;
}