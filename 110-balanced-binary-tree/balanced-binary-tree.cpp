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
//writing the height function
 int height(TreeNode* root){
     if(root == nullptr){
         return 0;
     }
     int left=height(root->left);
     int right=height(root->right);

     int hight=max(left,right)+1;
     return hight;
 }
 //check the base case that if root is null then thetree is balanced 
 //also to check is a tree with a rootnode called root is balanced we need to ckeck
 //1 if its left subtree is balanced
// 2)is its right subtree is balanced
  //3)if the difference in the height of leftsubtree and right sub tree is less thanor equal to one  
    bool isBalanced(TreeNode* root) {
      if(root ==nullptr){
          return true;
      }
       bool left=isBalanced(root->left);
       if(left ==false )return false;
       bool right=isBalanced(root->right);
       if(right ==false )return false;
       bool balance=abs(height(root->left)-height(root->right)) <= 1;
       if(balance ==false )return false;
       if(left && right && balance){
           return true;
       }
       return false;   
    }
};