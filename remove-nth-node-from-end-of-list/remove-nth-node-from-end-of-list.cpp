
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode*c=head;
        while(c!=NULL)
        {
            size++;
            c=c->next;
        }
        ListNode*ne=head;
        c=head;
        if(c->next==NULL)
            return NULL;
        if(size==n)
            return head->next;
        for(int i=0;i<(size-n-1);i++)
        {
            ne=ne->next;
            
        }
        ne->next=ne->next->next;
        
        
        return c;
        
    }
};