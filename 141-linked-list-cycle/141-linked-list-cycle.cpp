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
        int n=1e4+1;
        if(head==NULL or head->next==NULL)return false;
        while(head->next!=NULL and head->next->next!=NULL)
        {
            n--;
            head=head->next;
            if(n==0)
                return true;
        }
        return false;
    }
};