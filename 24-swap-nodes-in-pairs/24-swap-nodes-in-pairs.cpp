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
    ListNode* swapPairs(ListNode* head) {
        ListNode*pre=new ListNode(0);
        pre->next=head;
        ListNode*mewhead=pre;
        ListNode*now=head;
        while(pre->next!=NULL and now->next!=NULL)
        {
            pre->next=now->next;
            now->next=pre->next->next;
            pre->next->next=now;
            pre=now;
            now=pre->next;
        }
        return mewhead->next;
    }
};