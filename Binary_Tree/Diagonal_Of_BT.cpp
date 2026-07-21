#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int val){
        this -> val = val;
        left = right = nullptr;
    }

};
static int idx = -1;
TreeNode* buildTree(vector<int> nums){
    idx++;
    if(nums[idx] == -1 ){
        return nullptr;
    }
    TreeNode* root =  new TreeNode(nums[idx]);
    root -> left = buildTree(nums);
    root -> right = buildTree(nums);
    
    return root;    
}
int ans = 0;
int Height(TreeNode* root){
    if(root == nullptr){
        return 0;
    }
    int rightht = Height(root -> right);
    int leftht = Height(root -> left);
    ans = max(ans , rightht + leftht);

    return max(rightht , leftht) + 1;
}
int main(){
    vector<int> nums = {1,2,-1,-1,3,-1,-1};
    TreeNode* root = buildTree(nums);
    cout<<Height(root)<<endl;
    return 0;
}