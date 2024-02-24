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
bool sameTree(TreeNode* p,TreeNode* q){
    if(p==nullptr && q==nullptr)return true;
    else if (p==nullptr || q==nullptr)return false;
    return (p->val==q->val && sameTree(p->left,q->left) && sameTree(p->right,q->right));
}

 bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==nullptr)return true;
        if(root==nullptr)return false;
         
        if(sameTree(root,subRoot))return true;
  
        bool left=isSubtree(root->left,subRoot);  
        bool right=isSubtree(root->right,subRoot);

        bool ans= left || right;
        return ans;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr)return nullptr;
     if(((isSubtree(root->left,p)|| sameTree(root,p)) && (isSubtree(root->right,q)|| sameTree(root,q)) )|| ((isSubtree(root->right,p)|| sameTree(root,p))) && (isSubtree(root->left,q)||sameTree(root,q))) return root;
  
      
      TreeNode* left=lowestCommonAncestor(root->left,p,q);
      TreeNode* right=lowestCommonAncestor(root->right,p,q); 
      TreeNode* ans=new TreeNode();
      if(left==nullptr)ans=right;
      else{
          ans=left;
      }

      return ans;  
    }
};