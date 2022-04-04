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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*tmp=head;
        int sz=0;
        while(tmp)
        {
            tmp=tmp->next;
            sz++;
        }
        //cout<<sz;
        int idx1=k-1;
        int idx2=sz-k;
        int val1;int val2;
        tmp=head;
        int i1=idx1;
        while(idx1--)
            tmp=tmp->next;
        val1=tmp->val;
        tmp=head;
        while(idx2--)
            tmp=tmp->next;
        val2=tmp->val;
        tmp->val=val1;
        tmp=head;
        while(i1--)
            tmp=tmp->next;
        tmp->val=val2;
        return head;
            
            
    }
};