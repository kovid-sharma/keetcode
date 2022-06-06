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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*a=headA;
        ListNode*b=headB;
        while(headA!=headB)
        {
            if(headA)
                headA=headA->next;
            else
                headA=b;
            if(headB)
                headB=headB->next;
            else
                headB=a;
        }
        return headB;
    }
};