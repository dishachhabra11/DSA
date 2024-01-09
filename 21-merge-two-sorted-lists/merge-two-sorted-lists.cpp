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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *prev;
        ListNode *head;
        ListNode* firstnode=new ListNode();

 if(list1==nullptr && list2==nullptr){
                return list1;
            }


       else  if(list1 == nullptr){
            return list2;
            }
            else if (list2 ==nullptr){
            return list1;
            }
           
         else if(list1->val <= list2-> val ){
           firstnode->val=list1->val;
            list1=list1->next;
            head=firstnode;
            prev=firstnode;
        }
        else {
             firstnode->val=list2->val;
             list2=list2->next;
             head=firstnode;
             prev=firstnode;
        }
        
        

        while ( list1 != nullptr || list2 != nullptr){
            ListNode* newnode=new ListNode();

            if(list1 == nullptr){
            prev->next=list2;
            return head;
            }
            else if (list2 ==nullptr){
            prev->next=list1;
            return head;
            }
            else if(list1->val < list2->val){
               newnode->val=list1->val;
               list1=list1->next;
            }
            else {
                newnode->val=list2->val;
                list2=list2->next;
            }
            prev->next=newnode;
            prev=newnode;
        }
        return head;
        
    }
};