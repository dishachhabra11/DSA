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

 auto init =[](){
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     return 'c';
 }();

class Solution {
public:

   bool validateBST(TreeNode* root,long min,long max){
       if(root ==NULL) return true;
         if(root->val < min && root->val >max)return false;
       
       if(root->val > min && root->val <max && validateBST(root->left,min,root->val) &&validateBST(root->right,root->val,max))return true;
       return false;
   }
    bool isValidBST(TreeNode* root) {
        if(root ==NULL)return true;
         return validateBST(root,LONG_MIN,LONG_MAX);
    }
};