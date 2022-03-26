class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int sz=0;
        if(!head->next)return NULL;
       ListNode*tmp=head;
       while(tmp){
           tmp=tmp->next;
           sz++;
       }
       int to_travel= sz-n;
        if(to_travel==0)return head->next;
        ListNode*travel=head;
       for(int i=0;i<to_travel-1;i++){
           travel=travel->next;
       }
        if(travel->next)
        travel->next=travel->next->next;
        else
            travel->next=NULL;
        return head;
    }
};