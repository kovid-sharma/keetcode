class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>arr;
        arr.push(0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                arr.push(0);
            else
            {
                int t=arr.top();
                arr.pop();
                t=max(1,2*t);
                arr.top()+=t;
            }
        }
        return arr.top();
    }
};