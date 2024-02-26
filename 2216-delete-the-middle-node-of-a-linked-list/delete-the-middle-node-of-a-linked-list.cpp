/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow,*fast;
        slow=head;
        fast=head->next;
        if(head->next==NULL)return NULL;
        else if(fast->next==NULL){
            head->next=NULL;
            return head;
        }
        else{
  fast=fast->next;
        while(fast !=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *current;
        current=slow->next;
        
        
       slow->next=current->next;


     return head; 
        }
        
    }
};