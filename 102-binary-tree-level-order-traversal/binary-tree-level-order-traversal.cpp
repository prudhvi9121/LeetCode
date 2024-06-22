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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        map<int,vector<int>>mp;
        queue<pair<TreeNode*,int>>qq;
        qq.push({root,0});
        while(!qq.empty()){
            auto it=qq.front();
            qq.pop();
            TreeNode* nn=it.first;
            int lev=it.second;
            mp[lev].push_back(nn->val);
            if(nn->left) qq.push({nn->left,lev+1});
            if(nn->right) qq.push({nn->right,lev+1});
        }
        vector<vector<int>>res;
        for(auto it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};