#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this -> data = data;
        left = right = nullptr;
    }
};
static int idx = -1;
Node* buildTree(vector<int> nums){
    idx++;
    if(nums[idx] == -1){
        return nullptr;
    }
    Node* root = new Node(nums[idx]);
    root -> left = buildTree(nums);
    root -> right = buildTree(nums);

    return root;
}
//PreOrder Traversal 
void preOrder(Node* root){
    if(root == nullptr){
        return ;
    }
    cout<<root -> data<<" ";
    preOrder(root -> left);
    
    preOrder(root -> right);

}
//InOrder Traversal 
void inOrder(Node* root){
    if(root == nullptr){
        return ;
    }
    
    inOrder(root -> left);
    cout<<root -> data<<" ";
    inOrder(root -> right);

}
//PostOrder Traversal 
void PostOrder(Node* root){
    if(root == nullptr){
        return ;
    }
    
    PostOrder(root -> left);
    
    PostOrder(root -> right);
    cout<<root -> data<<" ";
}
//Level Order raversal
void LOT(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }else{
            cout<<temp -> data<<" ";
            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}
int main(){
    vector<int> nums = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(nums);
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    PostOrder(root);
    cout<<endl;
    LOT(root);
    
}