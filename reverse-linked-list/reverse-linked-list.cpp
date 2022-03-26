
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*curr=NULL;
        while(head){
            ListNode*now=head->next;
            head->next=curr;
            curr=head;
            head=now;
        }
        return curr;
    }
};