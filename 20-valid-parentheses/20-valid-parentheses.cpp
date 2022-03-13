class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push('(');
            if(s[i]=='[')
                st.push('[');
            if(s[i]=='{')
                st.push('{');
            
            if(s[i]==')'){
                if(!st.empty() and st.top()=='(')
                    st.pop();
                else
                    return false;
            }
            if(s[i]==']'){
                if(!st.empty() and st.top()=='[')
                    st.pop();
                else
                    return false;
            }
                
            if(s[i]=='}'){
                if(!st.empty() and st.top()=='{')
                    st.pop();
                else
                    return false;
            }       
        }
        if(st.empty())
        return true;
        return false;
    }
};