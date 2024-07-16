/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& values) {
        if (!root)
            return;

        inorder(root->left, values);
        values.push_back(root->val);
        inorder(root->right, values);
    }

    bool isValidBST(TreeNode* root) {
        if (!root) return true;
        vector<int> nodes;
        inorder(root, nodes);
        for (int i = 0; i < nodes.size() - 1; i++) {
            if (nodes[i] >= nodes[i + 1])
                return false;
        }
        return true;
    }
};