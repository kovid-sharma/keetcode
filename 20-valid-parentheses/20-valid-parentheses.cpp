class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto sym:s)
        {
            if(sym=='(' or sym=='{' or sym=='['){
                st.push(sym);
                continue;
            }
            else if(!st.empty())
            {
                if(sym==')' and st.top()=='(')
                {
                   st.pop(); 
                }
                else if(sym=='}' and st.top()=='{')
                {
                    st.pop();
                }
                else if(sym==']' and st.top()=='['){ 
                    st.pop();
                }
                else
                    return false;
            }
            else
                return false;
        }
        if(st.empty())
            return true;
        return false;
    }
};