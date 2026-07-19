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
TreeNode* buildTree(vector<int> nums, int &idx){
    idx++;
    if(nums[idx] == -1){
        return nullptr;
    }
    TreeNode* root = new TreeNode(nums[idx]);
    root -> left = buildTree(nums,idx);
    root -> right = buildTree(nums, idx);

    return root;

}
bool sameTree(TreeNode* p, TreeNode* q){
    if(p == nullptr || q == nullptr){
        return p == q;
    }
    bool LeftCheck = sameTree(p -> left , q -> left);
    bool RightCheck = sameTree(p -> right , q -> right);

    return LeftCheck && RightCheck && (p -> val == q -> val);
}
int main(){
    vector<int> nums1 = {1,2,-1,-1,3,-1,-1};
    int idx = -1;
    TreeNode* root1 = buildTree(nums1 , idx);
    
    vector<int> nums2 = {1,2,-1,-1,3,-1,-1};
    idx = -1;
    TreeNode* root2 = buildTree(nums2, idx);
    cout<<(sameTree(root1,root2)?"True" : "False")<<endl;
    return 0;
    
    
}