class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode* dum=new ListNode(0,head);
        ListNode*ans=dum;
        while(head!=NULL){
        if(head->next!=NULL and head->val==head->next->val)
        {
            while(head->next!=NULL and head->val==head->next->val)
            {
                head=head->next;
            }
            ans->next=head->next;
        }
        else
            ans=ans->next;
            head=head->next;
        }
        return dum->next;
    }
};