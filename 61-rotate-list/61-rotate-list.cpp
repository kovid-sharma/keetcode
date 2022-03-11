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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or head->next==NULL or k==0)return head;
        int sz=1;
        ListNode*cpy=head;
        while(true){
            if(head->next==NULL)
                break;
            head=head->next;
            sz++;
        }
        if(k%sz==0) return cpy;
        k=k%sz;
        head->next=cpy;
        for(int i=0;i<sz-k;i++){
            head=head->next;
        }
        cpy=head->next;
        head->next=NULL;
        return cpy;
    }
};