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
    auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class Solution {
public:
int n=1;
    int goodNodes(TreeNode* root) {
        
        if(root==nullptr){
            return 0;
        }
       TreeNode* left=root->left;
       TreeNode* right=root->right;

       if(left!=nullptr){
           if(root->val <= left->val)n++;
           else{
               left->val=root->val;
           }
           };
           
       if(right != nullptr){if(root->val <= right->val)n++;
       else{
           right->val=root->val;
       }};
       
       goodNodes(root->left);
       goodNodes(root->right);

   return n;
        
    }
 
};