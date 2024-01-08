/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head==NULL ||head->next==NULL)return false;
        
        ListNode* fast,*slow;
        fast=head->next;
        slow=head;
        int n=10000;
        while(n--){
            //first condition is if fast pointer meets slow pointer then its a cycle
            if(fast==slow ){
                return true;
            }
            //second condition is if fast reaches a null node then there can be no cycle
           if( fast==NULL || fast->next==NULL ){
               return false;
           } 
           else{
               slow=slow->next;
            fast=fast->next->next;

           }
        }
        return false;
        
    }
};