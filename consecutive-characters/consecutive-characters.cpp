class Solution {
public:
    int maxPower(string s) {
        int ms=0,m=0;
        stack<char>st;
        int n=s.size();
        st.push('-');
        for(int i=0;i<n;i++)
        {
            if(st.top()!=s[i])
            {
               ms=0;
                st.push(s[i]);
            }
            else
                ms++;
            m=max(ms,m);
        }
        return ++m;
    }
};