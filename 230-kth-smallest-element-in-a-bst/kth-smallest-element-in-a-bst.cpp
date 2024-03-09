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

    //  int kthSmallest(TreeNode* root, int k) {

    //     priority_queue <int, vector<int>, greater<int>> gq;

    //     queue <TreeNode*> q;
    //     q.push(root);
    //     while(!q.empty()){
    //        TreeNode* temp=q.front();
    //        gq.push(temp->val);
    //        q.pop();
    //       if(temp->left !=NULL) q.push(temp->left);
    //       if(temp->right !=NULL)q.push(temp->right);
 
    //     }
    //     while(k--){
    //         if(k==0){
    //         return gq.top();
    //         }
    //         gq.pop();
    //     }
    //  return -1;
        
    // }
class Solution {
public:
int n=0;

 int moveleft(TreeNode* root,int k){
     if(root==NULL){
         return -2 ;
     }
    if(root->left !=nullptr) moveleft(root->left,k);
    if(root!=nullptr)++n;
    return n;
    if(root->right !=nullptr)moveleft(root->right,k);

 }
  int kthSmallest(TreeNode* root, int k) {

        priority_queue <int, vector<int>, greater<int>> gq;

        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty()){
           TreeNode* temp=q.front();
           gq.push(temp->val);
           q.pop();
          if(temp->left !=NULL) q.push(temp->left);
          if(temp->right !=NULL)q.push(temp->right);
 
        }
        while(k--){
            if(k==0){
            return gq.top();
            }
            gq.pop();
        }
     return -1;
        
    }
};