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
};