/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void for_p(vector<TreeNode*>& path,TreeNode* root, TreeNode* target ) {
        if (!root) return;
        path.push_back(root);
        if (root == target) return;
        if (root->left) {
            for_p(path, root->left, target);
            if (path.back() == target) return;
        }
        if (root->right) {
            for_p(path, root->right, target);
            if (path.back() == target) return;
        }
        path.pop_back();
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>ar1,ar2;
        for_p(ar1,root,p);
        for_p(ar2,root,q);
        // for(int i=0;i<ar1.size();i++){
        //     cout<<ar1[i]->val<<" ";
        // }
        cout<<endl;
        for(int i = ar1.size()-1; i>=0; i--){
           
            for(int j = ar2.size()-1; j>=0 ;j--){
                if(ar1[i]==ar2[j]) return ar1[i];
            }
        }
        return ar1[0];
    }
};