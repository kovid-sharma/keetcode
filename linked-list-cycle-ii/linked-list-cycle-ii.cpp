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
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast=head;
        ListNode*slow=head;
        if(head==NULL)return NULL;
        while(fast and fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)break;
        }
        slow=head;
        while(fast and fast->next){
            if(slow==fast)return fast;
            fast=fast->next;
            slow=slow->next;
            
        }
        return NULL;
    }
};