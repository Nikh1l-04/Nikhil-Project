#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this -> data = data;
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
    root -> right = buildTree(nums);

    return root;

}



int main(){  
    return 0;
}
