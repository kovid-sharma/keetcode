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
    ListNode* deleteDuplicates(ListNode* head) {
       if(head==NULL) return head;
        ListNode*collect=head;
        int pre=head->val;
        ListNode*aage=head->next;
        while(aage!=NULL)
        {
            if(aage->val!=pre)
            {
               pre=aage->val;
                collect->next=aage;
                collect=collect->next;
            }
            aage=aage->next;
        }
        collect->next=NULL;
        return head;
    }
};