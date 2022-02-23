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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int car=0;
        ListNode*fixed=new ListNode(0,NULL);
        ListNode*traver=fixed;
        while(l1!=NULL or l2!=NULL)
        {   
            int tmp=0;
            if(l1!=NULL)
            {
               tmp+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                tmp+=l2->val;
                l2=l2->next;
            }
            tmp+=car;
            ListNode*tmpq= new ListNode(tmp%10,NULL);
            car= tmp/10;
            traver->next=tmpq;
            traver=traver->next;
        }
        if(car==1)
        {
            ListNode*tmpq=new ListNode(car,NULL);
            traver->next=tmpq;
        }
        return fixed->next;
    }
};