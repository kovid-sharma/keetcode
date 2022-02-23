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
        stack<int>num1,num2;
        while(l1)
        {
            num1.push(l1->val);
            l1=l1->next;
        }
        while(l2)
        {
            num2.push(l2->val);
            l2=l2->next;
        }
        stack<int>ans;
        ListNode*fixed=new ListNode(0,NULL);
        ListNode* traver= fixed;
        int car=0;
        while(!num1.empty() or !num2.empty())
        {
            int tmp= 0;
            if(!num1.empty())
            {
                tmp+=num1.top();
                num1.pop();
            }
            if(!num2.empty())
            {
                tmp+=num2.top();
                num2.pop();
            }
            tmp+=car;
            ans.push(tmp%10);
            car=tmp/10;
            
        }
        if(car==1)
            ans.push(1);
        while(!ans.empty())
        {
            ListNode*tmpq=new ListNode(ans.top(),NULL);
            ans.pop();
            traver->next=tmpq;
            traver=traver->next;
        }
        return fixed->next;
    }
};