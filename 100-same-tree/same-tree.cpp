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

    void traverseLevelOrderWise(TreeNode* root,vector<int> &ans){
       queue<TreeNode*> q;
       q.push(root);

       while(!q.empty()){
           TreeNode* temp=q.front();
           if(temp==nullptr){
               ans.push_back(-1);
               q.pop();
           }
           else{
               ans.push_back(temp->val);
           q.pop();
           q.push(temp->left);
           q.push(temp->right);
           }
         

       }
      
      

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
   vector<int> ans_p;
   vector<int> ans_q;

      traverseLevelOrderWise(p,ans_p);
      traverseLevelOrderWise(q,ans_q);

        if(ans_p == ans_q){
           
            return true;
        }

         return false;
    }
};