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
    ListNode* reverse(ListNode*prev,ListNode*root)
    {
        if(root==NULL)
            return prev;
        ListNode* toAdd= root->next;
        root->next=prev;
        return reverse(root,toAdd);
    }
    ListNode* reverseList(ListNode* head) {
        return reverse(NULL,head);
    }
};