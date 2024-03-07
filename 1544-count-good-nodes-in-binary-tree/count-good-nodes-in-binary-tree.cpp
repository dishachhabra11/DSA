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
    int count = 1 ;
public:
    int goodNodes(TreeNode* root) {
        isGood(root->left,root->val);
        isGood(root->right, root->val);
        root->left = NULL;
        root->right = NULL;
        return count;
    }
private:
    void isGood(TreeNode* root, int g){
        if(!root){
            return;
        }
        if(root->val>=g){
            g=root->val;
            count++;
        }
        isGood(root->left, g);
        isGood(root->right,g);

    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();