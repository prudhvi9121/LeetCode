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
    queue<pair<int,int>>qq;
    int bottomleftvalue(TreeNode* root,int cnt){
        if(!root->left && !root->right){ 
            qq.push({root->val,cnt});
            return 0;
        }
        int a=0,b=0;
        if(root->left)a=1+bottomleftvalue(root->left,cnt+1);
        if(root->right)b=1+bottomleftvalue(root->right,cnt+1);
        return max(a,b); 
    }
    int findBottomLeftValue(TreeNode* root) {
        int k=bottomleftvalue(root,0);
        while(!qq.empty()){
            auto m=qq.front();
            if(m.second==k) return m.first;
            qq.pop();
        }
        return k;
    }
};