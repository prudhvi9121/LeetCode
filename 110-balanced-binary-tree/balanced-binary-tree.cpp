/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root,bool &res){
        if(!root) return 0;
        int l=solve(root->left,res);
        int r=solve(root->right,res);
        if(abs(l-r)>1) res=false;
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        bool res=true;
        solve(root,res);
        return res;
    }
};