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
        right = left = nullptr;
    }
};
static int idx = -1;
Node* buildTree(vector<int> nums){
    idx++;
    if(nums[idx] == -1){
        return nullptr;
    }
    Node* root =  new Node(nums[idx]);
    root -> left = buildTree(nums);
    root -> right = buildTree(nums);
    
    return root;
}

//PreOrder Traversal

void preOrder(Node* root){
    if(root == nullptr){
        return;
    }
    cout<<root -> data<<" ";

    preOrder(root -> left);
    preOrder(root -> right);
}

//Inorder Traversal

void inOrder(Node* root){
    if(root == nullptr){
        return ;
    }
    inOrder(root -> left);
    cout<<root -> data<<" ";
    inOrder(root -> right);
}
//Postorder Traversal

void postOrder(Node* root){
    if(root == nullptr){
        return ;
    }
    postOrder(root -> left);
    
    postOrder(root -> right);
    cout<<root -> data<<" ";
}
int main(){
    vector<int> nums = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(nums);
    cout<<"PreOrder Traversal : ";
    preOrder(root);
    cout<<endl;
    cout<<"InOrder Traversal : ";
    inOrder(root);
    cout<<endl;
    cout<<"PostOrder Traversal : ";
    postOrder(root);
    cout<<endl;
    return 0;
}