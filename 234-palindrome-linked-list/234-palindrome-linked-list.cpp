
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL or head->next==NULL)return true;
        vector<int>a;
        while(head)
        {
            a.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<a.size()/2;i++)
            if(a[i]!=a[a.size()-i-1])
                return false;
        return true;
    }
};