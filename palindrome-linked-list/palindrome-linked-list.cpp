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
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return true;
        if(head->next==NULL)
            return true;
        ListNode* one=head;
        ListNode* two=head;
        while(two!=NULL &&  two->next!=NULL)
        {
            one=one->next;
           two= two->next->next;
        }
        ListNode*te=head;
        stack<int> st;
        while(one!=NULL)
        {
            st.push(one->val);
            one=one->next;
        }
        while(!st.empty())
        {
            if(st.top()!=te->val)
                return false;
            st.pop();
            te=te->next;
        }
        return true;
    }
};