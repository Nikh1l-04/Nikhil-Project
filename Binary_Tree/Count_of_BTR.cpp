#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        this -> data = data ;
        left = right = nullptr;
    }
};
static int idx = -1;
TreeNode* buildTree(vector<int> nums){
    idx++;
    if(nums[idx] == -1){
        return nullptr;
    }
    TreeNode* root = new TreeNode(nums[idx]);
    root -> left = buildTree(nums);
    root -> left = buildTree(nums);

    return root;
}


int Count(TreeNode* root){
    if(root == nullptr){
        return 0;
    }
    int RCount = Count(root -> left);
    int LCount = Count(root -> right);

    return RCount + LCount + 1;
}
int main(){
    vector<int> nums = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    TreeNode* root = buildTree(nums);
    int ans = Count(root);
    cout<<"Count of Tree : "<<ans;
    return 0;
}