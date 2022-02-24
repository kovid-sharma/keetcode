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
    ListNode* sortList(ListNode* head) {
        if(head==NULL or head->next==NULL)
            return head;
        ListNode*cpy=new ListNode(0,NULL);
        ListNode*traver=cpy;
        vector<int>arr;
        while(head)
        {
           arr.push_back(head->val);
            head=head->next;
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            ListNode*sample=new ListNode(arr[i],NULL);
            traver->next=sample;
            traver=traver->next;
        }
        return cpy->next;
    }
};