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
        if(head==NULL or head->next==NULL)return head;
        ListNode*start= new ListNode(0,head);
        ListNode* traver= start;
        while(head!=NULL){
        if(head->next!=NULL and head->next->val==head->val)
        {
            while(head->next!=NULL and head->next->val==head->val)
            {
                head=head->next;
                
            }
            traver->next=head->next;
        }
        else
            traver=traver->next;
        head=head->next;
        }
        return start->next;
    }
};