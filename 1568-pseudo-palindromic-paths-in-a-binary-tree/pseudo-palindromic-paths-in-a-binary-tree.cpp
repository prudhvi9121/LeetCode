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
        if( (vec>>(root->val)) & 1 ){
            vec ^= (1<<root->val);
        }
        else{
            vec |= (1<<root->val);
        }
        if(!root)return ;
        if(!root->left and !root->right){
            int f = __builtin_popcount(vec);
            if(f==0 or f==1) res+=1;
            return ;
        }
        if(root->left)palindrome(root->left,vec);
        if(root->right)palindrome(root->right,vec);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>vec(9,0);
        palindrome(root,0);
        return res;
    }
};