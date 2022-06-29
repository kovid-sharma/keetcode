class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)return NULL;
        if(head->next==NULL)return NULL;//no cycle in a single noded list
        
        
        ListNode*first=head;
        ListNode*secon=head;
        bool isCycle=false;
        while(secon!=NULL)
        {
            first=first->next;
            if(secon->next==NULL)
                return NULL;
            secon=secon->next->next;
            if(first==secon)
            {
                isCycle=true;
                break;
            }
        }
        if(!isCycle)
            return NULL;
        secon=head;
        while(secon!=first)
        {
            secon=secon->next;
            first=first->next;
        }
        return secon;
    }
};