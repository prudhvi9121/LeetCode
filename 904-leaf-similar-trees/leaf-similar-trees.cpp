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
    vector<int>lis;
    int cnt=0;
    void similar(TreeNode* root1){
        if(root1==NULL) return;
        if(root1->left==NULL and root1->right==NULL){
            lis.push_back(root1->val);
            return ;
        }
        similar(root1->left);
        similar(root1->right);
    }
    void sim(TreeNode* root2){
        if(root2==NULL) return;
        if(root2->left==NULL and root2->right==NULL){
            if(lis[cnt]==root2->val){
                cnt++;
            }
            else lis.push_back(0);
            return ;
        }
         sim(root2->left);
         sim(root2->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        similar(root1);
        sim(root2);
        cout<<lis.size()<<" "<<cnt<<endl;
        if(lis.size()==cnt) return 1;
        return 0;
    }
};