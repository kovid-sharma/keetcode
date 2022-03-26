/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int sz_a=0;
        int sz_b=0;
        ListNode*tmpa=headA;
        ListNode*tmpb=headB;
        while(tmpa){
            tmpa=tmpa->next;
            sz_a++;
        }
        while(tmpb){
            tmpb=tmpb->next;
            sz_b++;
        }
        if(sz_b>sz_a){
            ListNode*bst=headB;
            int dif=sz_b-sz_a;
            while(dif-- and bst){
                bst=bst->next;
            }
            ListNode*ast=headA;
            while(ast!=NULL and bst){
                if(ast==bst)
                    return ast;
                ast=ast->next;
                bst=bst->next;
            }
            return NULL;
        }
        else{
             ListNode*ast=headA;
            int dif=sz_a-sz_b;
            while(dif-- and ast){
                ast=ast->next;
            }
            ListNode*bst=headB;
            while(bst!=NULL and ast){
                if(ast==bst)
                    return bst;
                ast=ast->next;
                bst=bst->next;
            }
            return NULL;
        }
    }
};