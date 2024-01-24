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
    int res=0;
    void palindrome(TreeNode* root,int vec){
        vec ^= (1<<root->val);
        if(!root)return ;
        if(!root->left and !root->right){
            if(!(vec) or !((vec-1)&vec)) res+=1;
            return ;
        }
        if(root->left)palindrome(root->left,vec);
        if(root->right)palindrome(root->right,vec);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        palindrome(root,0);
        return res;
    }
};