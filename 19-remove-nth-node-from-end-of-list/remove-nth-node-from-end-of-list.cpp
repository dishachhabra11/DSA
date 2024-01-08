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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next==NULL) {
            return NULL;
        }
        int count = 1;
        ListNode *mid, *fast;
        fast = head;
        mid = head;

        while (fast != NULL && fast->next != NULL) {
            mid = mid->next;
            fast = fast->next->next;

            count = count + 2;
        }
        if (fast == NULL)count--;
        
        //count is the size of the linked list
        if(count==n){
            head=head->next;
            return head;
        }

        ListNode *current, *forw;
        current=head;
        int target = count - n;
    
        int countss = 1;
       
        while (countss != target) {
            current = current->next;
            countss++;
        }
        forw = current->next->next;
        current->next = forw;

    return head;
    }

    

};
