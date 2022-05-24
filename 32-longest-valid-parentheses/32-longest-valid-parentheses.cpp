class Solution {
public:
    int longestValidParentheses(string s) {
        int len=0;
        int n=s.size();
        stack<int>idSt;
        idSt.push(-1);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                idSt.push(i);
            }
            else
            {
                    idSt.pop();
                if(idSt.empty())
                    idSt.push(i);
                else
                {
                    len=max(len,i-idSt.top());
                }
            }
        }
        return len;
    }
};