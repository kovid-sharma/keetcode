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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*tmp=head;
        while(tmp and tmp->next){
            
            if(tmp->next->val==val)
            {   
                tmp->next=tmp->next->next;
            }
            else
                tmp=tmp->next;
        }
        if(head==NULL)return NULL;
        return head->val==val?head->next:head;
    }
};