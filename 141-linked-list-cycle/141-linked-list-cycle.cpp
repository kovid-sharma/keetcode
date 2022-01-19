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
        unordered_map<ListNode*,bool>mp;
        while(head!=NULL and head->next!=NULL)
        {
            if(mp.find(head)!=mp.end())
                return true;
            else
            {
                mp[head]=true;
                head=head->next;
            }
        }
        return false;
    }
};