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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> mp;
        queue<pair<TreeNode*, pair<int, int>>> qq;
        qq.push({root, {0, 0}});
        while (!qq.empty()) {
            auto it = qq.front();
            qq.pop();
            TreeNode* nn = it.first;
            int lev = it.second.first, hlev = it.second.second;
            mp[lev][hlev].insert(nn->val);
            if (nn->left)
                qq.push({nn->left, {lev - 1, hlev + 1}});
            if (nn->right)
                qq.push({nn->right, {lev + 1, hlev + 1}});
        }
        vector<vector<int>> res;
        for (auto p : mp) {
            vector<int> col;
            for (auto q : p.second) {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            res.push_back(col);
        }

        return res;
    }
};