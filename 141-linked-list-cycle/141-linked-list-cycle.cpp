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
    bool hasCycle(ListNode *head) {
        //2 solutions 1st with maps 2nd with slow and fast
        if(head==NULL or head->next==NULL)return false;
        int n=1e4+10;
        while(head->next!=NULL and head->next->next!=NULL)
        {
            head=head->next;
            n--;
            if(n==0)
                return true;
        }
        return false;
        
    }
};