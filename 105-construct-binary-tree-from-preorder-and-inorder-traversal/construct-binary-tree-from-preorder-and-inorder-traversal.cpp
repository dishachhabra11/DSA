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

 TreeNode* constructTree(vector<int>& preorder,int preStart,int preEnd, vector<int>& inorder,int instart,int inend,map<int,int> &mp) {

      if(preStart > preEnd || instart >inend)return NULL;

     TreeNode* root=new TreeNode(preorder[preStart]);
     int index=mp[root->val];
     int relativeIndex=index-instart;
     
     root->left=constructTree(preorder,preStart+1,preStart+relativeIndex,inorder,instart,index-1,mp);
     root->right=constructTree(preorder,preStart+relativeIndex+1,preEnd,inorder,index+1,inend,mp);

     return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
     int preStart=0;
     int preEnd=preorder.size()-1;
     int instart=0;
     int inend=inorder.size()-1;
     map <int,int> mp;
      
     

      for(int i=instart;i<= inend;i++){
          mp[inorder[i]]=i;
      }

      return constructTree(preorder,preStart,preEnd,inorder,instart,inend,mp);
        
    }
};