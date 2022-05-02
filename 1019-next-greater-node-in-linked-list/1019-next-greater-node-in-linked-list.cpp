class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>cpy;
        while(head)
        {
            cpy.push_back(head->val);
            head=head->next;
        }
        int n=cpy.size();
        stack<int>ids;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++)
        {
            while(!ids.empty() and cpy[ids.top()]<cpy[i]){
                ans[ids.top()]=cpy[i];
                ids.pop();
            }
            ids.push(i);
        }
        return ans;
    }
};