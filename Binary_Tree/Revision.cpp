#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
public:
    int data;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int data){
        this -> data = data;
        left = right = nullptr;
    }

};
static int idx = -1;
TreeNode* buildTree(vector<int> nums){
    idx++;
    if(nums[idx] == -1){
        return NULL;
    }
    TreeNode* root = new TreeNode(nums[idx]);
    root -> left = buildTree(nums);
    root -> left = buildTree(nums);
    return root;
}
//PreOrder Traversal 
void preOrder(TreeNode* root){
    if(root  = nullptr){
        return;
    }
    cout<<root -> data <<" ";
    preOrder(root -> left);
    preOrder(root -> right);
}


int main(){
    vector<int> nums = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    TreeNode* root = buildTree(nums);

    return 0;

}