#include<iostream>
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
//Height of the Tree
int Height(Node* root){
    if(root == nullptr){
        return 0;
    }
    int leftHt = Height(root -> left);
    int rightHt = Height(root -> right);

    return max(leftHt ,rightHt) + 1;

}
//Nodes in a Tree
int count(Node* root){
    if(root == nullptr){
        return 0;
    }
    int leftCount = count(root -> left);
    int rightCount = count(root -> right);

    return leftCount + rightCount + 1;

}
//Sum of the Tree
int Sum(Node* root){
    if(root == nullptr){
        return 0;
    }
    int leftSum = Sum(root -> left);
    int rightSum = Sum(root -> right);

    return leftSum + rightSum + root -> data;

}
int main(){
    vector<int> nums = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(nums);
    cout<<"Height : "<<Height(root)<<endl;
    cout<<"Count of Nodes : "<<count(root)<<endl;
    cout<<"Sum : "<<Sum(root)<<endl;

}