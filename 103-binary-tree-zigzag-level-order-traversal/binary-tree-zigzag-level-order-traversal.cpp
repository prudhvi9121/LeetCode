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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>>res;
        queue<TreeNode*>qq;
        qq.push(root);
        int flg=0;
        while(!qq.empty()){
            int k=qq.size();
            vector<int>samp;
            for(int i=0;i<k;i++){
                TreeNode *nn=qq.front();
                qq.pop();
                samp.push_back(nn->val);
                if(nn->left) qq.push(nn->left);
                if(nn->right) qq.push(nn->right);
            }if(!flg) flg=1;
            else{
                flg=0;
                reverse(samp.begin(),samp.end());
            }
            res.push_back(samp);
        }
        return res;
    }
};