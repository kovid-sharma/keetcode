class Solution {
public:
    TreeNode*solveMid(ListNode*head,ListNode*tail)
    {
        if(head==tail)
            return NULL;
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast!=tail and fast->next!=tail)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        TreeNode* nRoot=new TreeNode(slow->val);
        nRoot->left=solveMid(head,slow);
        nRoot->right=solveMid(slow->next,tail);
        return nRoot;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode*tail=NULL;
        return solveMid(head,tail);
    }
};