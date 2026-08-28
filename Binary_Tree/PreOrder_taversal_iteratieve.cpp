#include<iostream>
#include<stack>
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

vector<int> preorderTraversal(Node* root) {
    vector<int> preOrder;
    if(root == NULL){
        return preOrder;
    }
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        preOrder.push_back(root -> data);
        if(root -> right != NULL){
            st.push(root -> right);
        }
        if(root -> left != NULL){
            st.push(root -> left);
        }
    }
    return preOrder;
        

}

int main(){
    vector<int> nums = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(nums);
    vector<int> ans = preorderTraversal(root);
    for(int val : ans){
        cout << val << " ";
    }
    return 0;
}

