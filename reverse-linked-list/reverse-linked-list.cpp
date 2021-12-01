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
    ListNode* reverseList(ListNode* head) {
        ListNode*c=head;
        stack<int> st;
        while(c!=NULL)
        {   st.push(c->val);
            c=c->next;
            
        }
        c=head;
        while(!st.empty())
        {   
        
            c->val=st.top();
            st.pop();
            c=c->next;
        }
        return head;
    }
};