class Solution {
public:
    string minRemoveToMakeValid(string s) {
       vector<int>toerase;
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push(i);
            if(s[i]==')')
            {
                if(st.empty())
                toerase.push_back(i);
                else
                    st.pop();
            }
        }
        while(!st.empty()){
            toerase.push_back(st.top());
            st.pop();
        }
        for(int i=0;i<toerase.size();i++)
            s[toerase[i]]='$';
        string ans;
        for(int i=0;i<s.size();i++)
            if(s[i]!='$')
                ans.push_back(s[i]);
        return ans;
    }
};