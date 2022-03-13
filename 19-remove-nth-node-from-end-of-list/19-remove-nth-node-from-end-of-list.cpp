
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz=0;
        ListNode*cpy=head;
        while(head)
        {
            sz++;
            head=head->next;
        }
        if(sz==1)
            return NULL;
        sz-=n;
        ListNode*traver=cpy;
        if(sz==0)
        {
            return cpy->next;
        }
        for(int i=0;i<sz-1;i++)
        {
            traver=traver->next;
        }
        if(traver->next!=NULL)
        traver->next=traver->next->next;
        else
            traver->next=NULL;
        return cpy;
        
    }
};