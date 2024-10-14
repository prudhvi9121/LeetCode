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
    int find_sum(TreeNode* root,int sum){
        if(!root) return 0;
        sum = (sum*10) + root->val;
        if(!root->left && !root->right) return sum;
        return find_sum(root->left,sum) + find_sum(root->right,sum);        
    }
    int sumNumbers(TreeNode* root) {
        return find_sum(root,0);
    }
};