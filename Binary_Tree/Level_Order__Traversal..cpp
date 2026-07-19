#include<iostream>
#include<queue>
#include<vector> 
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

Node* buildTree(const vector<int>& nums){
    idx++;
    if(idx >= nums.size() || nums[idx] == -1){
        return nullptr;
    }
    
    Node* root = new Node(nums[idx]);
    root -> left = buildTree(nums);
    root -> right = buildTree(nums);
    
    return root;
}

void BFS(Node* root){
    if(root == nullptr) return; 
    
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty()){
        Node* curr = Q.front();
        Q.pop();
        cout << curr -> data << " ";
        if(curr -> left != nullptr){
            Q.push(curr -> left);
        }
        if(curr -> right != nullptr){
            Q.push(curr -> right);
        }
    }
    cout << endl;
}

int main(){
    vector<int> nums = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(nums);
    BFS(root);
    return 0;
}