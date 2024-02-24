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

   
    bool isSameTree(TreeNode* p, TreeNode* q) {

        
        if(p==nullptr && q==nullptr)return true;
        else if(p==nullptr || q==nullptr)return false;

    queue <TreeNode*> qp;
    queue <TreeNode*> qq;


    qp.push(p);
    qq.push(q);

    while(!qp.empty() || !qq.empty()){
        TreeNode* temp_p=qp.front();
        TreeNode* temp_q=qq.front();
      
           if(temp_p==nullptr ^ temp_q ==nullptr){
               return false;
           }
           else if(temp_p==nullptr && temp_q ==nullptr){
              qq.pop();
              qp.pop();
           }
        
            else if(temp_p->val != temp_q->val){
            return false;
        }
        
        else {
            
            qp.pop();
            qq.pop();
    
    qp.push(temp_p->left);
    qq.push(temp_q->left);
    qp.push(temp_p->right);
    qq.push(temp_q->right);

        }
         
    }
    return true;
    
    }
};