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
        ListNode*firstfix=head;
        ListNode*firsttmp=NULL;
        ListNode*secondtmp=head;
        while(--k)
            firstfix=firstfix->next;
        firsttmp=firstfix->next;
        
        while(firsttmp)
        {
            secondtmp=secondtmp->next; 
            firsttmp=firsttmp->next;
        }
        swap(firstfix->val,secondtmp->val);
        return head;
           
        
    }
};