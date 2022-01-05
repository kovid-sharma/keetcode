class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int ans;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+" or tokens[i]=="-" or tokens[i]=="*" or tokens[i]=="/")
            {
                int a1=st.top();st.pop();
                int a2=st.top();st.pop();
                if(tokens[i]=="+")
                    ans=(a1+a2);
                if(tokens[i]=="-")
                    ans=(a2-a1);
                if(tokens[i]=="*")
                    ans=(a1*a2);
                if(tokens[i]=="/")
                    ans=(a2/a1);
                st.push(ans);
            }
            else
            {
                int pu = stoi(tokens[i]);
                st.push(pu);
            }
        }
        return st.top();
    }
};