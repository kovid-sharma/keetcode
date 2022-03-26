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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)return NULL;
        ListNode*odd=head;
        ListNode*eve=head->next;
        ListNode*evestart=head->next;
        while(odd and odd->next and eve and eve->next)
        {
            odd->next=odd->next->next;
            odd=odd->next;
            eve->next=eve->next->next;
            eve=eve->next;
        }
        odd->next=evestart;
        return head;
        
    }
};