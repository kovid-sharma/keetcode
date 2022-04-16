class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto &it:tokens)
        {
            if(it=="+" or it=="-" or it=="*" or it=="/")
            {
                int num1= st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                int ans;
                if(it=="+")
                    ans=num1+num2;
                if(it=="-")
                     ans= num2-num1;
                if(it=="/")
                    ans=num2/num1;
                if(it=="*")
                    ans=num2*num1;
                st.push(ans);
                
            }
            else
            {
                st.push(stoi(it));  
            }
        }
        return st.top();
    }
};