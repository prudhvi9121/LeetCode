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
    void palindrome(TreeNode* root,vector<int> vec){
        if(!root)return ;
        if(!root->left and !root->right){
            vec[root->val-1]+=1;
            int k=0;
            int path=0;
            for(auto it:vec){
                path+=it;
               // cout<<it<<" ";
                if(it&1)k++;
            }
          // cout<<" -"<<path<<" "<<k<<endl;
            if(((path&1) and k==1) or ((path%2==0) and k==0)) res++;
            return ;
        }
        vec[root->val-1]+=1;
        palindrome(root->left,vec);
        palindrome(root->right,vec);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>vec(9,0);
        palindrome(root,vec);
        return res;
    }
};