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
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        queue<pair<TreeNode*,unsigned long long>> qq; 
        qq.push({root, 1});
        unsigned long long res = 0;

        while (!qq.empty()) {
            int k = qq.size();
            unsigned long long left1=0,right1=0;
            for (int i = 0; i < k; ++i) {
                TreeNode* nn = qq.front().first;
                unsigned long long l = qq.front().second;
                qq.pop();
                if(i==0) left1=l;
                if(i==k-1) right1=l;
                if (nn->left) qq.push({nn->left, 2 * l});
                if (nn->right) qq.push({nn->right, 2 * l + 1});
            }
            res = max(res, right1 - left1);
        }

        return res + 1;
    }
};