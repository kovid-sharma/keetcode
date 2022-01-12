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
        //valid index storing
        if(head==NULL)return head;
        ListNode* valid=head;ListNode* fulltraver=head->next;
        int prevval= head->val;
        while(fulltraver!=NULL)
        {   
            if(prevval!=fulltraver->val)
            {
                valid->next=fulltraver;
                prevval=fulltraver->val;
                valid=valid->next;
            }
            fulltraver=fulltraver->next;
        }
        valid->next=NULL;
        return head;
    }
};