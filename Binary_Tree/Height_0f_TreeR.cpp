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
int Height(TreeNode* root){
    if(root == nullptr){
        return 0;

    }
    int R = Height(root -> left);
    int L = Height(root -> right);

    return max(R,L) + 1; 

}
int main(){
    vector<int> nums = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    TreeNode* root = buildTree(nums);
    int ans = Height(root);
    cout<<"Height of Tree : "<<ans;
    return 0;
}